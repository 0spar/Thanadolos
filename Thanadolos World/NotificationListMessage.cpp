#include "Globals.h"
#include "NotificationListMessage.hpp"

NotificationListMessage::NotificationListMessage(ByteArray flags)
{
	this->flags = flags;

}

NotificationListMessage::NotificationListMessage()
{

}

ushort NotificationListMessage::getId()
{
	return id;
}

std::string NotificationListMessage::getName()
{
	return "NotificationListMessage";
}

void NotificationListMessage::serialize(BinaryWriter& writer)
{
	writer.writeShort(this->flags.size());
	while (_loc2_ < this->flags.size())
}

void NotificationListMessage::deserialize(BinaryReader& reader)
{
	{
		int _loc2_ = reader.readUnsignedShort();
		while (_loc3_ < _loc2_)
}