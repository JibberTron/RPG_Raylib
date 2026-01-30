#include "GameLoop.h"

int main()
{
	GameLoop loop = GameLoop(1800, 900, Color(255, 0,255,255),"The Window");
	loop.StartGameLoop();
	return 0;
}