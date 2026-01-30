#include "GameLoop.h"

void GameLoop::StartGameLoop()
{
	InitWindow(mScreenWidth, mScreenHeight, mWinName.c_str());

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(mBackgroundColor);
		SetTargetFPS(120);

		EndDrawing();
	}
	CloseWindow();

}
