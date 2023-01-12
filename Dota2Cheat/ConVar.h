#pragma once
#include <cstdint>
#include <fstream>
#include <string>
#include <map>
#define CVAR_MAX_INDEX 4274

enum class EConvarType : std::uint8_t
{
	BOOL = 0,
	INT32,
	UINT32,
	INT64,
	UINT64,
	FLOAT,
	DOUBLE,
	STRING,
	COLOR_RGBA,
	UNK_SOME_TWO_FLOATS,
	UNK_SOME_THREE_FLOATS,
	UNK_SOME_FOUR_FLOATS,
	UNK_SOME_THREE_FLOATS_AGAIN,
};
union ConVarValue
{
	bool boolean{};
	std::uint64_t ui64;
	std::int64_t i64;
	std::uint32_t ui32;
	std::int32_t i32;
	float flt;
	double dbl;
	const char* str;
	std::uint32_t clr_rgba;
	std::array<float, 2> two_floats;
	std::array<float, 3> three_floats;
	std::array<float, 4> four_floats;
};

struct ConVar {
	const char* name{};
	ConVar* m_Pnext{};
	uintptr_t unk1{};
	uintptr_t unk2{};
	const char* desc{};
	EConvarType type{};
	int unk_maybe_number_of_times_changed{};
	int flags{};
	int unk4{};
	int CALLBACK_INDEX{};
	int unk5{};
	ConVarValue value{};
	ConVarValue defaultValue{};
};
struct CVarNode {
	ConVar* var;
	void* unk;
};

struct ConVarID
{
	static inline constexpr auto BAD_ID = 0xFFFFFFFF;
	std::uint64_t impl{};
	void* var_ptr{};

	bool IsGood() const noexcept
	{
		return impl != BAD_ID;
	}

	void Invalidate() noexcept
	{
		impl = BAD_ID;
	}
};
class CVarSystem {
public:
	static std::map<ConVar*, int> CVar;
	using t_CvarCallback = void(*)(const ConVarID& id, int unk1, const ConVarValue* val, const ConVarValue* old_val);

	t_CvarCallback GetCallback(int id) {
		return *(t_CvarCallback*)(*(uintptr_t*)((uintptr_t)this + 0x80) + 24*id);
	}
	void TriggerCallback(ConVar* conVar) {
		int index = CVar[conVar];
		const auto old_val = conVar->value;
		ConVarID cvid;
		cvid.impl = static_cast<uint64_t>(3437);
		cvid.var_ptr = conVar;
		GetCallback(conVar->CALLBACK_INDEX)(cvid, 0, &conVar->value, &old_val);
	}
	CVarNode* GetCVarNodeList() {
		//return std::span<const CVarNode>{ (const CVarNode*)((uintptr_t)this + 0x40), *(uint16_t*)((uintptr_t)this + 0x5A) };
		return (CVarNode*)(*(uintptr_t*)((uintptr_t)this + 0x40));
	};
	void DumpConVarsToMap() {
		auto list = GetCVarNodeList();
		for (int i = 0; i < 4200; i++) {
			if (list[i].var != nullptr &&
				list[i].var->name != nullptr)
				CVar[list[i].var] = i;
		}
	}
	void DumpConVarsToFile(const char* path) {
		std::ofstream file{ path };
		if (file.is_open()) {
			auto list = GetCVarNodeList();
			for (int i = 0; i < 4200; i++) {
				if (list[i].var != nullptr &&
					list[i].var->name != nullptr)
					file << list[i].var->name << " " << i << '\n';
			}

			file.close();
		}
	}
};