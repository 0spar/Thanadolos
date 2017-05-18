#include "Globals.h"
#include "BooleanByteWrapper.hpp"


/*char BooleanByteWrapper::setFlag(char flag, char offset, bool value)
{
	if (offset >= 8)
		throw std::invalid_argument("offset must be lesser than 8");

	return value ? (char)(flag | (1 << offset)) : (char)(flag & 255 - (1 << offset));
}*/

uint BooleanByteWrapper::setFlag(uint a, uint pos, bool b)
{
	switch (pos)
	{
	case 0:
		if (b)
		{
			a = a | 1;
		}
		else
		{
			a = a & 255 - 1;
		}
		break;
	case 1:
		if (b)
		{
			a = a | 2;
		}
		else
		{
			a = a & 255 - 2;
		}
		break;
	case 2:
		if (b)
		{
			a = a | 4;
		}
		else
		{
			a = a & 255 - 4;
		}
		break;
	case 3:
		if (b)
		{
			a = a | 8;
		}
		else
		{
			a = a & 255 - 8;
		}
		break;
	case 4:
		if (b)
		{
			a = a | 16;
		}
		else
		{
			a = a & 255 - 16;
		}
		break;
	case 5:
		if (b)
		{
			a = a | 32;
		}
		else
		{
			a = a & 255 - 32;
		}
		break;
	case 6:
		if (b)
		{
			a = a | 64;
		}
		else
		{
			a = a & 255 - 64;
		}
		break;
	case 7:
		if (b)
		{
			a = a | 128;
		}
		else
		{
			a = a & 255 - 128;
		}
		break;
	}
	return a;
}

bool BooleanByteWrapper::getFlag(uint a, uint pos)
{
	switch (pos)
	{
	case 0:
		return (a & 1) != 0;
	case 1:
		return (a & 2) != 0;
	case 2:
		return (a & 4) != 0;
	case 3:
		return (a & 8) != 0;
	case 4:
		return (a & 16) != 0;
	case 5:
		return (a & 32) != 0;
	case 6:
		return (a & 64) != 0;
	case 7:
		return (a & 128) != 0;
	}
}