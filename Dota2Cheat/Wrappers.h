#pragma once
#include <cstdint>
#include "Schema.h"
#include "Signatures.h"
#include "CUtlVector.h"
#include "SDK/color.h"
struct SchemaClassBinding {
	SchemaClassBinding* parent;
	const char* binaryName; // ex: C_World
	//const char* projectName; // ex: libclient.so
	const char* className; // ex: client
	void* classInfoOldSynthesized;
	void* classInfoN;
	void* thisModuleBindingPointer;
	void* pSchemaType;
};

class SharedCooldownInfo {
public:
	const char* itemName;
	float cooldown;
};

// ��������� �����
class CUnitInventory {
public:
	// ���������� ������ ������� �� �������� ���������(19 ��������)
	ENT_HANDLE* GetItems() {
		static int offset = Schema::Netvars["C_DOTA_UnitInventory"]["m_hItems"];
		if (!offset)
			return nullptr;
		return reinterpret_cast<ENT_HANDLE*>((uintptr_t)this + offset);
	}

	//CUtlVector<SharedCooldownInfo> GetCooldowns() {
	//	static int offset = Schema::Netvars["C_DOTA_UnitInventory"]["m_SharedCooldownList"];
	//	if (!offset)
	//		return CUtlVector<SharedCooldownInfo>();
	//	return *reinterpret_cast<CUtlVector<SharedCooldownInfo>*>((uintptr_t)this + offset);
	//}
};

class DotaPlayer {
public:
	virtual void func0();

	template<typename T>
	T Member(int offset/*, T defaultValue = T{}*/) {
		//if (!offset)
		//	return defaultValue;
		return *(T*)((uintptr_t)this + offset);
	}
	inline uint32_t GetAssignedHeroHandle() {
		return Member< uint32_t>(Schema::Netvars["C_DOTAPlayerController"]["m_hAssignedHero"]);
	}
	inline BaseEntity* GetAssignedHero() {
		return Interfaces::Entity->GetBaseEntity(ENTID_FROM_HANDLE(GetAssignedHeroHandle()));
	}
	inline void CastNoTarget(ENT_HANDLE handle, BaseEntity* issuer = nullptr) {
		if (issuer == nullptr)
			issuer = GetAssignedHero();
		PrepareOrder(DotaUnitOrder_t::DOTA_UNIT_ORDER_CAST_NO_TARGET,
			0,
			&Fvector::Zero,
			ENTID_FROM_HANDLE(handle),
			PlayerOrderIssuer_t::DOTA_ORDER_ISSUER_PASSED_UNIT_ONLY,
			issuer,
			false,
			true
		);
	}
	inline void BuyItem(int itemId) {

		PrepareOrder(DOTA_UNIT_ORDER_PURCHASE_ITEM,
			1,
			&Fvector::Zero,
			itemId,
			PlayerOrderIssuer_t::DOTA_ORDER_ISSUER_PASSED_UNIT_ONLY,
			GetAssignedHero(),
			false,
			true
		);
	}
	inline void OrderMoveTo(Fvector* pos, bool directMovement = false, BaseEntity* issuer = nullptr) {
		if (issuer == nullptr)
			issuer = GetAssignedHero();

		PrepareOrder(directMovement ? DotaUnitOrder_t::DOTA_UNIT_ORDER_MOVE_TO_DIRECTION : DotaUnitOrder_t::DOTA_UNIT_ORDER_MOVE_TO_POSITION,
			0,
			pos,
			0,
			PlayerOrderIssuer_t::DOTA_ORDER_ISSUER_PASSED_UNIT_ONLY,
			issuer,
			false,
			true
		);
	}
	inline void PrepareOrder(DotaUnitOrder_t orderType, UINT32 targetIndex, Fvector* position, UINT32 abilityIndex, PlayerOrderIssuer_t orderIssuer, BaseEntity* issuer = nullptr, bool queue = false, bool showEffects = true) {
		if (issuer == nullptr)
			issuer = GetAssignedHero();

		if (Signatures::PrepareUnitOrders == nullptr)
			return;

		Signatures::PrepareUnitOrders(this, orderType, targetIndex, position, abilityIndex, orderIssuer, issuer, queue, showEffects);
	}
};

class BaseEntity {
public:

	template<typename T>
	T Member(int offset/*, T defaultValue = T{}*/) {
		//if (!offset)
		//	return defaultValue;
		return *(T*)((uintptr_t)this + offset);
	}
	virtual CSchemaClassBinding* SchemaBinding();
	inline void SetColor(Color clr)
	{
		static int offset = Schema::Netvars["C_BaseModelEntity"]["m_clrRender"];
		if (!offset)
			return;
		uintptr_t clrAddr = (uintptr_t)+offset;
		*(BYTE*)(clrAddr + 0) = static_cast<BYTE>(clr.RGBA[0]);
		*(BYTE*)(clrAddr + 1) = static_cast<BYTE>(clr.RGBA[1]);
		*(BYTE*)(clrAddr + 2) = static_cast<BYTE>(clr.RGBA[2]);
		*(BYTE*)(clrAddr + 3) = static_cast<BYTE>(clr.RGBA[3]);

		Signatures::OnColorChanged(this);
	}
	inline ENT_HANDLE GetOwnerEntity() {
		return Member<ENT_HANDLE>(Schema::Netvars["C_BaseEntity"]["m_hOwnerEntity"]);
	}
	inline Fvector GetPos() {
		u64 offset = Schema::Netvars["C_BaseEntity"]["m_pGameSceneNode"];
		if (!offset)
			return Fvector::Zero;

		return *(Fvector*)(*(uintptr_t*)( (uintptr_t)this + offset ) + 0x10);
	}
	inline int GetMaxHealth() {
		return Member<int>(Schema::Netvars["C_BaseEntity"]["m_iMaxHealth"]);
	}
	inline int GetHealth() {
		return Member<int>(Schema::Netvars["C_BaseEntity"]["m_iHealth"]);
	}
	inline DOTATeam_t GetTeam() {
		return Member<DOTATeam_t>(Schema::Netvars["C_BaseEntity"]["m_iTeamNum"]);
	}


};
class BaseNpc : public BaseEntity {
public:
	struct ItemOrAbility {
		const char* name;
		ENT_HANDLE handle;
		ItemOrAbility(const char* name, ENT_HANDLE handle) :name(name), handle(handle) {

		}
		BaseEntity* GetEntity() const {
			return Interfaces::Entity->GetBaseEntity(ENTID_FROM_HANDLE(handle));
		}
	};
	inline const char* GetUnitName() {
		//return *(const char**)((uintptr_t)this + Schema::Netvars["C_DOTA_BaseNPC"]["m_iszUnitName"]);
		//std::cout << std::hex << Schema::Netvars["C_DOTA_BaseNPC"]["m_iszUnitName"] << '\n';
		//std::cout << "this: " << this << '\n';
		return Member<const char*>(Schema::Netvars["C_DOTA_BaseNPC"]["m_iszUnitName"]);
	}
	inline bool BaseNPCHero_IsIllusion() {
		uint32_t offset = Schema::Netvars["C_DOTA_BaseNPC_Hero"]["m_hReplicatingOtherHeroModel"]; //credits to hollow @UC
		if (!offset)
			return false;
		uintptr_t handle = *(uintptr_t*)((uintptr_t)this + offset);
		return ENT_HANDLE_VALID(handle);
	}
	//inline CUtlVector<SharedCooldownInfo> BaseNPC_GetCooldowns() {
	//	static int offset = Schema::Netvars["C_DOTA_BaseNPC"]["m_Inventory"];
	//	if (!offset)
	//		return CUtlVector<SharedCooldownInfo>();
	//	CUnitInventory* inv = (CUnitInventory*)((uintptr_t)this + offset);
	//	return inv->GetCooldowns();
	//}
	inline std::vector<ItemOrAbility> GetAbilities() {
		static int offset = Schema::Netvars["C_DOTA_BaseNPC"]["m_hAbilities"];
		if (!offset)
			return {};

		std::vector<ItemOrAbility> result{};
		ENT_HANDLE* hAbilities = (ENT_HANDLE*)((uintptr_t)this + offset);
		for (int j = 0; j < 35; j++) {
			ENT_HANDLE handle = hAbilities[j];
			if (ENT_HANDLE_VALID(handle)) {
				auto* identity = Interfaces::Entity->GetIdentity(ENTID_FROM_HANDLE(handle));
				result.push_back(ItemOrAbility((identity->entityName != nullptr ? identity->entityName : identity->internalName), identity->entHandle));
			}
		}
		return result;
	}
	//inline uintptr_t GetInventory() {
	//	if (!ptr)
	//		return 0;

	//	static int offset = Schema::Netvars["C_DOTA_BaseNPC"]["m_Inventory"];
	//	if (!offset)
	//		return 0;
	//	
	//	return ptr + offset;
	//}

	inline ItemOrAbility FindItemBySubstring(const char* str) {
		if (str == nullptr)
			return ItemOrAbility{ nullptr, 0xFFFFFFFF };
		for (const auto& item : GetItems())
			if (strstr(item.name, str)) 
				return item;
			
		return ItemOrAbility{ nullptr, 0xFFFFFFFF };
	}
	inline std::vector<ItemOrAbility> GetItems() {
		static int offset = Schema::Netvars["C_DOTA_BaseNPC"]["m_Inventory"];
		if (!offset)
			return {};

		std::vector<ItemOrAbility> result{};
		CUnitInventory* inv = (CUnitInventory*)((uintptr_t)this + offset);
		if (inv) {
			ENT_HANDLE* itemsHandle = inv->GetItems();
			for (int i = 0; i < 19; i++) {
				if (ENT_HANDLE_VALID(itemsHandle[i])) {
					auto* identity = Interfaces::Entity->GetIdentity(ENTID_FROM_HANDLE(itemsHandle[i]));
					result.push_back(ItemOrAbility((identity->entityName != nullptr ? identity->entityName : identity->internalName), identity->entHandle));
				}
			}
		}
		return result;
	}

	inline float GetMana() {
		return Member<float>(Schema::Netvars["C_DOTA_BaseNPC"]["m_flMana"]);
	}
	inline float GetMaxMana() {
		return Member<float>(Schema::Netvars["C_DOTA_BaseNPC"]["m_flMaxMana"]);
	}
	inline INT8 GetLifeState() {
		return Member<INT8>(Schema::Netvars["C_BaseEntity"]["m_lifeState"]);
	}
};
class BaseAbility :public BaseEntity {
public:
	float GetCooldown() {
		return Member<float>(0x5b0);
	}
	int GetCharges() {
		return Member<int>(0x610);
	}
	int GetManaCost() {
		return Member<int>(0x5b8);
	}

};