#include "GameLoop.h"

#if 1
void MemLeakDetection()
{
#define MEMORY_LEAK_LINE  -1

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(MEMORY_LEAK_LINE);
}
#endif

int main()
{
	MemLeakDetection();
	GameLoop loop = GameLoop(1800, 900, "RPG TESTING");
	loop.StartGameLoop();
	return 0;
}