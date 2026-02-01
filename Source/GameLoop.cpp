#include <raylib.h>
#include "GameLoop.h"


GameLoop::~GameLoop()
{

}

void GameLoop::StartGameLoop()
{
	InitWindow(mScreenWidth, mScreenHeight, mWinName.c_str());
	render.GetAssetManager().LoadImage();
	while (!WindowShouldClose())
	{
		render.Draw();
		
	}
	render.ShutDown();
	CloseWindow();

}
