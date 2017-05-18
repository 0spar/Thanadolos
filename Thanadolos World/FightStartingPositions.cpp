#include "Globals.h"
#include "FightStartingPositions.hpp"

FightStartingPositions::FightStartingPositions(std::vector<uint> positionsForChallengers, std::vector<uint> positionsForDefenders)
{
	this->positionsForChallengers = positionsForChallengers;
	this->positionsForDefenders = positionsForDefenders;

}

FightStartingPositions::FightStartingPositions()
{

}

ushort FightStartingPositions::getId()
{
	return __id;
}

std::string FightStartingPositions::getName()
{
	return "FightStartingPositions";
}

void FightStartingPositions::serialize(BinaryWriter& writer)
{
	writer.writeShort(this->positionsForChallengers.size());
	while (_loc2_ < this->positionsForChallengers.size())
	while (_loc3_ < this->positionsForDefenders.size())
}

void FightStartingPositions::deserialize(BinaryReader& reader)
{
	{
		int _loc7_ = 0;
		int _loc2_ = reader.readUnsignedShort();
		while (_loc3_ < _loc2_)
		while (_loc5_ < _loc4_)
}