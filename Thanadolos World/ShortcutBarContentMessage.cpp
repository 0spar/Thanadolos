#include "Globals.h"
#include "ShortcutBarContentMessage.hpp"

ShortcutBarContentMessage::ShortcutBarContentMessage(int barType, std::vector<Shortcut*> shortcuts)
{
	this->barType = barType;
	this->shortcuts = shortcuts;

}

ShortcutBarContentMessage::ShortcutBarContentMessage()
{

}

ShortcutBarContentMessage::~ShortcutBarContentMessage()
{
	for (int i = 0;i < this->shortcuts.size(); i++)
		delete this->shortcuts[i];
}

ushort ShortcutBarContentMessage::getId()
{
	return id;
}

std::string ShortcutBarContentMessage::getName()
{
	return "ShortcutBarContentMessage";
}

void ShortcutBarContentMessage::serialize(BinaryWriter& writer)
{
	writer.writeByte(this->barType);
	while (_loc2_ < this->shortcuts.size())
}

void ShortcutBarContentMessage::deserialize(BinaryReader& reader)
{
	{
		Shortcut *_loc5_ = new Shortcut();
		this->barType = reader.readByte();
		while (_loc3_ < _loc2_)
}