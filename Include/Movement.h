#pragma once
#include "Character.h"

class Movement
{
private:
	Character mPlayer1;
	
public:
	Movement()
	{
		mPlayer1 = Character(900, 450);
	}

	~Movement();

	Character GetPlayer() const { return mPlayer1; }
	void UpdateMovement(float _deltaTime);
};