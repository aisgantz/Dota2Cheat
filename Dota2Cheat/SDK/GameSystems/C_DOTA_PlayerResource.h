#pragma once
#include "../Entities/CDOTAPlayerController.h"

class PlayerResourcePlayerData_t : public VClass {
	char pad[0xc8];
public:
	GETTER(uint32_t, GetPlayerSlot, Netvars::PlayerResourcePlayerData_t::m_nPlayerSlot);
};
class C_DOTA_PlayerResource : public VClass {
public:
	GETTER(CUtlVector<PlayerResourcePlayerData_t>, GetVecPlayerTeamData, Netvars::C_DOTA_PlayerResource::m_vecPlayerTeamData);
	IGETTER(CHandle<CDOTAPlayerController>, GetPlayerIDToPlayerTable, Netvars::C_DOTA_PlayerResource::m_playerIDToPlayer);

	auto PlayerIDToHandle(int id) {
		return GetPlayerIDToPlayerTable()[id];
	}
};