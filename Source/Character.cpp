#include "Character.h"

Character::Character()
{
	mPositionX = 10.f;
	mPositionY = 10.f;
	mVelocity = 250.f;
	mState = MovementState::IDLE;
	mDirection = MovementDirection::DEFAULT;
	mFrameMovement = 1.f;
}

Character::Character(float _x, float _y) : mPositionX(_x), mPositionY(_y)
{
	mVelocity = 250.f;
	mState = MovementState::IDLE;
	mDirection = MovementDirection::DEFAULT;
	mFrameMovement = 1.f;
}

Character::Character(const Character& _copy)
{
	mPositionX = _copy.mPositionX;
	mPositionY = _copy.mPositionY;
	mVelocity = _copy.mVelocity;
	mState = _copy.mState;
	mDirection = _copy.mDirection;
	mFrameMovement = _copy.mFrameMovement;
}

Character::~Character()
{

}

Character& Character::operator=(const Character& _assign)
{
	if (this != &_assign)
	{
		mPositionX = _assign.mPositionX;
		mPositionY = _assign.mPositionY;
		mVelocity = _assign.mVelocity;
		mState = _assign.mState;
		mDirection = _assign.mDirection;
		mFrameMovement = _assign.mFrameMovement;
	}

	return *this;
}
