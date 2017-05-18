#include "Globals.h"
#include "TextInformationMessage.hpp"

TextInformationMessage::TextInformationMessage(int msgType, int msgId, std::vector<std::string> parameters)
{
	this->msgType = msgType;
	this->msgId = msgId;
	this->parameters = parameters;

}

TextInformationMessage::TextInformationMessage()
{

}

ushort TextInformationMessage::getId()
{
	return id;
}

std::string TextInformationMessage::getName()
{
	return "TextInformationMessage";
}

void TextInformationMessage::serialize(BinaryWriter& writer)
{
	writer.writeByte(this->msgType);
	while (_loc2_ < this->parameters.size())
}

void TextInformationMessage::deserialize(BinaryReader& reader)
{
	{
		this->msgType = reader.readByte();
		while (_loc3_ < _loc2_)
}