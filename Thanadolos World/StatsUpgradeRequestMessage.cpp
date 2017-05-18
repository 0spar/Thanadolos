#include "Globals.h"
#include "StatsUpgradeRequestMessage.hpp"

StatsUpgradeRequestMessage::StatsUpgradeRequestMessage(bool useAdditionnal, int statId, int boostPoint)
{
	this->useAdditionnal = useAdditionnal;
	this->statId = statId;
	this->boostPoint = boostPoint;

}

StatsUpgradeRequestMessage::StatsUpgradeRequestMessage()
{

}

ushort StatsUpgradeRequestMessage::getId()
{
	return id;
}

std::string StatsUpgradeRequestMessage::getName()
{
	return "StatsUpgradeRequestMessage";
}

void StatsUpgradeRequestMessage::serialize(BinaryWriter& writer)
{
	writer.writeBool(this->useAdditionnal);
}

void StatsUpgradeRequestMessage::deserialize(BinaryReader& reader)
{
	{
}