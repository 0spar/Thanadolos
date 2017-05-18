#include "Globals.h"
#include "CharacterBaseCharacteristic.hpp"

CharacterBaseCharacteristic::CharacterBaseCharacteristic(int base, int additionnal, int objectsAndMountBonus, int alignGiftBonus, int contextModif)
{
	this->base = base;
	this->additionnal = additionnal;
	this->objectsAndMountBonus = objectsAndMountBonus;
	this->alignGiftBonus = alignGiftBonus;
	this->contextModif = contextModif;

}

CharacterBaseCharacteristic::CharacterBaseCharacteristic()
{

}

ushort CharacterBaseCharacteristic::getId()
{
	return __id;
}

std::string CharacterBaseCharacteristic::getName()
{
	return "CharacterBaseCharacteristic";
}

void CharacterBaseCharacteristic::serialize(BinaryWriter& writer)
{
	writer.writeVarShort(this->base);
}

void CharacterBaseCharacteristic::deserialize(BinaryReader& reader)
{
	{
}