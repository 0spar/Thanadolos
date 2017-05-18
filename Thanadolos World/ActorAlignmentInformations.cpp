#include "Globals.h"
#include "ActorAlignmentInformations.hpp"

ActorAlignmentInformations::ActorAlignmentInformations(int alignmentSide, int alignmentValue, int alignmentGrade, int characterPower)
{
	this->alignmentSide = alignmentSide;
	this->alignmentValue = alignmentValue;
	this->alignmentGrade = alignmentGrade;
	this->characterPower = characterPower;

}

ActorAlignmentInformations::ActorAlignmentInformations()
{

}

ushort ActorAlignmentInformations::getId()
{
	return __id;
}

std::string ActorAlignmentInformations::getName()
{
	return "ActorAlignmentInformations";
}

void ActorAlignmentInformations::serialize(BinaryWriter& writer)
{
	writer.writeByte(this->alignmentSide);
}

void ActorAlignmentInformations::deserialize(BinaryReader& reader)
{
	{
}