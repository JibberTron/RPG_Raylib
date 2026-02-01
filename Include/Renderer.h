#pragma once
#include "Movement.h"
#include "AssetManager.h"

class Renderer
{
private:
	Movement mCharacterMovement;
	AssetManager mAssetManager;

public:
	Renderer() { };

	void Draw();
	void LoadImage();
	void ShutDown();

	AssetManager& GetAssetManager() { return mAssetManager; }
	const AssetManager& GetAssetManager() const { return mAssetManager; }

	// for testing purposes
	void OnScreenStats();

};