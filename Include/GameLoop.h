#pragma once
#include <string>
#include "Renderer.h"

class GameLoop
{
private:
	unsigned short int mScreenWidth;
	unsigned short int mScreenHeight;
	std::string mWinName;
	Renderer render;

public:
	~GameLoop();
	GameLoop()
	{
		mScreenWidth = 800;
		mScreenHeight = 600;
		mWinName = "Default Window";
	}

	GameLoop(unsigned short int _width, unsigned short int _height, std::string _winName)
		: mScreenWidth(_width), mScreenHeight(_height), mWinName(_winName)
	{
	
	}

	void StartGameLoop();
	
	// getters
	unsigned short int GetScreenWidth() const { return mScreenWidth; }
	unsigned short int GetScreenHeight() const { return mScreenHeight; }
};