#include "AssetManager.h"

AssetManager::AssetManager()
{
	
}

void AssetManager::LoadImage()
{
	mPlayerImage = LoadTexture(mImagePath.c_str());
}
