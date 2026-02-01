#pragma once
#include <raylib.h>
#include <string>

class AssetManager
{
private:
	Texture2D mPlayerImage = Texture2D(0);
	std::string mImagePath = "C:/GitHub/Repo/PersonalRepo/Raylib_RPG/Assets/bacteria.png";

public:
	AssetManager();
	
	std::string GetPlayerPath() const { return mImagePath; }

	Texture2D& GetPlayerImage() { return mPlayerImage; }
	const Texture2D& GetPlayerImage() const { return mPlayerImage; }

	void SetPlayerImage(const Texture2D& _image) { mPlayerImage = _image; }
	void LoadImage();
};