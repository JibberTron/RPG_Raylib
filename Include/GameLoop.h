#pragma once
#include <raylib.h>
#include <string>

class GameLoop
{
private:
	unsigned short int mScreenWidth;
	unsigned short int mScreenHeight;
	Color mBackgroundColor;
	std::string mWinName;

public:
	GameLoop()
	{
		mScreenWidth = 800;
		mScreenHeight = 600;
		mWinName = "Default Window";
		mBackgroundColor = Color(100, 255, 255, 255);
	}

	GameLoop(unsigned short int _width, unsigned short int _height, Color _color, std::string _winName)
		: mScreenWidth(_width), mScreenHeight(_height), mBackgroundColor(_color), mWinName(_winName)
	{

	}

	void StartGameLoop();
};