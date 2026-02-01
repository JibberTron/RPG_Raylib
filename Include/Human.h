#pragma once
#include "Character.h"

class Human : public Character
{
private:

public:
	Human();
	Human(float _x, float _y, std::string _firstName = " ", std::string _lastName = " ", unsigned int _health = 0);

	void SetPosX(const float _x) { mPositionX = _x; }
	void SetPosY(float _y) { mPositionY = _y; }
	void SetVelocity(const float _vel) { mVelocity = _vel; }
	void SetHealth(const unsigned int _health);
	void SetFirstName(const std::string _firstName) { mFirstName = _firstName; }
	void SetLastName(const std::string _lastName) { mFirstName = _lastName; }
	void SetDirection(const MovementDirection& _dir) { mDirection = _dir; }
	void SetState(const MovementState& _state) { mState = _state; }
	void SetGender(const Gender& _gen) { mGender = _gen; }
	void SetClass(const CharacterClass& _class);
	void SetRace(const Race& _race) { mRace = _race; }
	void SetLiving(const LivingState& _life) { mAlive = _life; }

	float GetPosX() const { return mPositionX; }
	float GetPosY() const { return mPositionY; }
	float GetVelocity() const { return mVelocity; }
	unsigned int GetHealth() const { return mHealth; }
	std::string GetFirstName() const { return mFirstName; }
	std::string GetLastName() const { return mLastName; }
	MovementDirection GetDirection() const { return mDirection; }
	MovementState GetState() const { return mState; }
	Gender GetGender() const { return mGender; }
	CharacterClass GetClass() const { return mClass; }
	Race GetRace() const { return mRace; }
	LivingState GetLiving() const { return mAlive; }
};