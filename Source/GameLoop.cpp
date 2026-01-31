#include <raylib.h>
#include "GameLoop.h"
#include <iostream>

GameLoop::~GameLoop()
{

}

void GameLoop::StartGameLoop()
{
	InitWindow(mScreenWidth, mScreenHeight, mWinName.c_str());
	std::string direction;
	std::string state;
	while (!WindowShouldClose())
	{
		ClearBackground(Color(0, 0, 0, 255));
		SetTargetFPS(120);
		DrawRectangle((int)test.GetPlayer().GetPosX(), (int)test.GetPlayer().GetPosY(), 40, 40, WHITE);
		test.UpdateMovement(GetFrameTime());
		switch (test.GetPlayer().GetDirection())
		{
		case MovementDirection::UP:
			direction = "UP";
			break;

		case MovementDirection::DOWN:
			direction = "DOWN";
			break;

		case MovementDirection::LEFT:
			direction = "LEFT";
			break;

		case MovementDirection::RIGHT:
			direction = "RIGHT";
			break;

		case MovementDirection::DEFAULT:
			direction = "DEFAULT";
			break;

		default:
			break;
		}
		switch (test.GetPlayer().GetState())
		{
		case MovementState::IDLE:
			state = "IDLE";
			break;

		case MovementState::MOVING:
			state = "MOVING";
			break;

		default:
			break;
		}

		DrawText(TextFormat(("Location: \nX - %1.f \nY- %1.f"), test.GetPlayer().GetPosX(), test.GetPlayer().GetPosY()), 20, 20, 20, WHITE);
		DrawText(TextFormat(("Direction: %s"), direction.c_str()), 150, 20, 20, WHITE);
		DrawText(TextFormat(("State: %s"), state.c_str()), 400, 20, 20, WHITE);
		DrawText(TextFormat(("DeltaTime: %f"), test.GetPlayer().mFrameMovement), 600, 20, 20, WHITE);
		DrawText(TextFormat(("Velocity: %f"), test.GetPlayer().mVelocity), 900, 20, 20, WHITE);
		BeginDrawing();
		EndDrawing();
	}
	CloseWindow();

}
