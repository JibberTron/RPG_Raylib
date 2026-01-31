#include "Movement.h"
#include <raylib.h>

Movement::~Movement()
{

}

void Movement::UpdateMovement(float _deltaTime)
{
	mPlayer1.mFrameMovement = mPlayer1.mVelocity * _deltaTime;
	
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
		mPlayer1.mPositionY -= mPlayer1.mFrameMovement ;
		mPlayer1.SetDirection(MovementDirection::UP);
	}
	else if (IsKeyReleased(KEY_W))
	{
		mPlayer1.SetDirection(MovementDirection::DEFAULT);
	}

	if (IsKeyDown(KEY_S))
	{
		mPlayer1.mPositionY += mPlayer1.mFrameMovement;
		mPlayer1.SetDirection(MovementDirection::DOWN);
	}
	else if (IsKeyReleased(KEY_S))
	{
		mPlayer1.SetDirection(MovementDirection::DEFAULT);
	}

	if (IsKeyDown(KEY_D))
	{
		mPlayer1.mPositionX += mPlayer1.mFrameMovement;
		mPlayer1.SetDirection(MovementDirection::LEFT);
		
	}
	else if (IsKeyReleased(KEY_D))
	{
		mPlayer1.SetDirection(MovementDirection::DEFAULT);
	}

	if (IsKeyDown(KEY_A))
	{
		mPlayer1.mPositionX -= mPlayer1.mFrameMovement;
		mPlayer1.SetDirection(MovementDirection::RIGHT);
	}
	else if (IsKeyReleased(KEY_A))
	{
		mPlayer1.SetDirection(MovementDirection::DEFAULT);
	}
}
