#pragma once
#include <string>

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
	DEFAULT_DIRECTION = 4
};

enum class LivingState
{
	ALIVE = 0,
	DEAD = 1
};

enum class Gender
{
	MALE = 1,
	FEMALE = 2,
	DEFAULT_GENDER = 3
};

enum class Race
{
	HUMAN = 1,
	UNDEAD = 2,
	DEFAULT_RACE = 3
};

enum class CharacterClass
{
	WARRIOR = 1,
	ARCHER = 2,
	MAGE = 3,
	PRIEST = 4,
	DEATH_KNIGHT = 5,
	DEFAULT_CLASS = 6
};

class Character
{
protected:
	float mPositionX;
	float mPositionY;
	float mVelocity;
	unsigned int mHealth;
	std::string mFirstName;
	std::string mLastName;
	MovementState mState = MovementState::IDLE;
	MovementDirection mDirection = MovementDirection::DEFAULT_DIRECTION;
	Gender mGender = Gender::DEFAULT_GENDER;
	CharacterClass mClass = CharacterClass::DEFAULT_CLASS;
	Race mRace = Race::DEFAULT_RACE;
	LivingState mAlive = LivingState::ALIVE;

public:
	Character();
	Character(float _x, float _y, std::string _firstName, std::string _lastName, unsigned int _health);
	virtual ~Character() = default;

	virtual void SetPosX(const float _x) = 0;
	virtual void SetPosY(float _y) = 0;
	virtual void SetVelocity(const float _vel) = 0;
	virtual void SetHealth(const unsigned int _health) = 0;
	virtual void SetFirstName(const std::string _firstName) = 0;
	virtual void SetLastName(const std::string _lastName) = 0;
	virtual void SetDirection(const MovementDirection& _dir) = 0;
	virtual void SetState(const MovementState& _state) = 0;
	virtual void SetGender(const Gender& _gen) = 0;
	virtual void SetClass(const CharacterClass& _class) = 0;
	virtual void SetRace(const Race& _race) = 0;
	virtual void SetLiving(const LivingState& _life) = 0;

	virtual float GetPosX() const = 0;
	virtual float GetPosY()  const = 0;
	virtual float GetVelocity() const = 0;
	virtual unsigned int GetHealth() const = 0;
	virtual std::string GetFirstName() const = 0;
	virtual std::string GetLastName() const = 0;
	virtual MovementDirection GetDirection() const  = 0;
	virtual MovementState GetState() const = 0;
	virtual Gender GetGender() const = 0;
	virtual CharacterClass GetClass() const = 0;
	virtual Race GetRace() const = 0;
	virtual LivingState GetLiving() const = 0;

};
