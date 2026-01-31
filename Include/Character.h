#pragma once

enum class MovementState
{
	MOVING = 0,
	IDLE = 1,
};

enum class MovementDirection
{
	UP = 0,
	DOWN = 1,
	LEFT = 2,
	RIGHT = 3,
	DEFAULT = 4
};

class Character
{
private:
	MovementState mState;
	MovementDirection mDirection;

public:
	float mPositionX;
	float mPositionY;
	float mVelocity;
	float mFrameMovement;
	Character();
	Character(float _x, float _y);
	Character(const Character& _copy);
	~Character();
	Character& operator=(const Character& _assign);

	void SetPosX(const float _x) { mPositionX = _x; }
	void SetPosY(float _y) { mPositionY = _y; }
	void SetVelocity(const float _vel) { mVelocity = _vel; }
	void SetDirection(const MovementDirection& _dir) { mDirection = _dir; }
	void SetState(const MovementState& _state) { mState = _state; }

	MovementDirection GetDirection() const { return mDirection; }
	MovementState GetState() const { return mState; }
	float GetPosX() const { return mPositionX; }
	float GetPosY()  { return mPositionY; }
	float GetVelocity() const { return mVelocity; }

};
