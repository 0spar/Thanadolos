#include "Globals.h"
#include "FightCommonInformations.hpp"

FightCommonInformations::FightCommonInformations(int fightId, int fightType, std::vector<FightTeamInformations> fightTeams, std::vector<uint> fightTeamsPositions, std::vector<FightOptionsInformations> fightTeamsOptions)
{
	this->fightId = fightId;
	this->fightType = fightType;
	this->fightTeams = fightTeams;
	this->fightTeamsPositions = fightTeamsPositions;
	this->fightTeamsOptions = fightTeamsOptions;

}

FightCommonInformations::FightCommonInformations()
{

}

ushort FightCommonInformations::getId()
{
	return __id;
}

std::string FightCommonInformations::getName()
{
	return "FightCommonInformations";
}

void FightCommonInformations::serialize(BinaryWriter& writer)
{
	writer.writeInt(this->fightId);
	while (_loc2_ < this->fightTeams.size())
	while (_loc3_ < this->fightTeamsPositions.size())
	while (_loc4_ < this->fightTeamsOptions.size())
		_loc4_++;
}

void FightCommonInformations::deserialize(BinaryReader& reader)
{
	{
		FightTeamInformations _loc9_;
		int _loc10_ = 0;
		FightOptionsInformations _loc11_;
		this->fightId = reader.readInt();
		while (_loc3_ < _loc2_)
		while (_loc5_ < _loc4_)
		while (_loc7_ < _loc6_)
}