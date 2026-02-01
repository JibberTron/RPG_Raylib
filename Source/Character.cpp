#include "Character.h"

Character::Character()
{
	mPositionX = 10.f;
	mPositionY = 10.f;
	mVelocity = 250.f;
	mFirstName = " ";
	mLastName = " ";
	mHealth = 0;
}

Character::Character(float _x, float _y, std::string _firstName, std::string _lastName, unsigned int _health) :
	mPositionX(_x), mPositionY(_y), mFirstName(_firstName), mLastName(_lastName), mHealth(_health)
{
	mVelocity = 250.f;
}

