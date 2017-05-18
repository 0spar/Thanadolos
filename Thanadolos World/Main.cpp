#include "Globals.h"
#include "World.hpp"

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#define LEAKS_DUMP false

#ifdef _DEBUG
#define LEAKS_DUMP true
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

int main(void)
{
	if (LEAKS_DUMP == true)
	{
		HANDLE hLogFile = CreateFile("leaks.txt", GENERIC_WRITE, FILE_SHARE_WRITE,
			NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
		_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
		_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
		_CrtSetReportFile(_CRT_WARN, hLogFile);
		_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);
		_CrtSetReportFile(_CRT_ERROR, hLogFile);
		_CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE);
		_CrtSetReportFile(_CRT_ASSERT, hLogFile);
	}
	try
	{
		World World;

		World.initializeData();
		World.startListening();
	}
	catch (std::exception &e)
	{
		Logger::Error("An error occured on world starting", 12, e.what());
		while (1);
	}
}