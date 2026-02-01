#include "Human.h"

Human::Human()
{

}

Human::Human(float _x, float _y, std::string _firstName, std::string _lastName, unsigned int _health) :
	Character(_x, _y, _firstName, _lastName, _health)
{
	mRace = Race::HUMAN;
}

void Human::SetHealth(const unsigned int _health)
{
	if (_health > 0)
	{
		SetLiving(LivingState::ALIVE);
	}
	else {
		SetLiving(LivingState::DEAD);
	}
	mHealth = _health;
}

void Human::SetClass(const CharacterClass& _class)
{
	mClass = _class;
}

