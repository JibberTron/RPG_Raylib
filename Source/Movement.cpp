#include "Movement.h"
#include <raylib.h>

Movement::~Movement()
{

}

void Movement::UpdateMovement(float _deltaTime)
{
	float playerX = mPlayer1.GetPosX();
	float playerY = mPlayer1.GetPosY();
	float FrameMovement = mPlayer1.GetVelocity() * _deltaTime;
	
	if (mPlayer1.GetDirection() == MovementDirection::UP || mPlayer1.GetDirection() == MovementDirection::DOWN
		|| mPlayer1.GetDirection() == MovementDirection::LEFT || mPlayer1.GetDirection() == MovementDirection::RIGHT)
	{
		mPlayer1.SetState(MovementState::MOVING);
	}
	else {
		mPlayer1.SetState(MovementState::IDLE);
	}

	if (IsKeyDown(KEY_W))
	{
		mPlayer1.SetPosY(playerY -= FrameMovement);
		mPlayer1.SetDirection(MovementDirection::UP);
	}
	else if (IsKeyReleased(KEY_W))
	{
		mPlayer1.SetDirection(MovementDirection::DEFAULT_DIRECTION);
	}

	if (IsKeyDown(KEY_S))
	{
		mPlayer1.SetPosY(playerY += FrameMovement);
		mPlayer1.SetDirection(MovementDirection::DOWN);
	}
	else if (IsKeyReleased(KEY_S))
	{
		mPlayer1.SetDirection(MovementDirection::DEFAULT_DIRECTION);
	}

	if (IsKeyDown(KEY_D))
	{
		mPlayer1.SetPosX(playerX += FrameMovement);
		mPlayer1.SetDirection(MovementDirection::LEFT);
		
	}
	else if (IsKeyReleased(KEY_D))
	{
		mPlayer1.SetDirection(MovementDirection::DEFAULT_DIRECTION);
	}

	if (IsKeyDown(KEY_A))
	{
		mPlayer1.SetPosX(playerX -= FrameMovement);
		mPlayer1.SetDirection(MovementDirection::RIGHT);
	}
	else if (IsKeyReleased(KEY_A))
	{
		mPlayer1.SetDirection(MovementDirection::DEFAULT_DIRECTION);
	}

	if (mPlayer1.GetPosX() <= 0)
	{
		mPlayer1.SetPosX(0);
	}
	else if (mPlayer1.GetPosX() >= 1750)
	{
		mPlayer1.SetPosX(1750);
	}

	if (mPlayer1.GetPosY() <= 0)
	{
		mPlayer1.SetPosY(0);
	}
	else if (mPlayer1.GetPosY() >= 820)
	{
		mPlayer1.SetPosY(820);
	}
}
