#include "Globals.h"
#include "StatedElement.hpp"

StatedElement::StatedElement(int elementId, int elementCellId, int elementState, bool onCurrentMap)
{
	this->elementId = elementId;
	this->elementCellId = elementCellId;
	this->elementState = elementState;
	this->onCurrentMap = onCurrentMap;

}

StatedElement::StatedElement()
{

}

ushort StatedElement::getId()
{
	return __id;
}

std::string StatedElement::getName()
{
	return "StatedElement";
}

void StatedElement::serialize(BinaryWriter& writer)
{
	writer.writeInt(this->elementId);
}

void StatedElement::deserialize(BinaryReader& reader)
{
	{
}