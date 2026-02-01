#pragma once
#include "Human.h"
#include "Character.h"

class Movement
{
private:
	Human mPlayer1;
	
public:
	Movement()
	{
		mPlayer1 = Human(900, 450);
	}

	~Movement();

	Human GetPlayer() const { return mPlayer1; }
	void UpdateMovement(float _deltaTime);
};