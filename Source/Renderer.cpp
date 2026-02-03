#include "Renderer.h"


void Renderer::Draw()
{
	ClearBackground(RAYWHITE);
	SetTargetFPS(120);
	BeginDrawing();

	DrawTexture(mAssetManager.GetPlayerImage(), (int)mCharacterMovement.GetPlayer().GetPosX(), (int)mCharacterMovement.GetPlayer().GetPosY(), WHITE);
	mCharacterMovement.UpdateMovement(GetFrameTime());
	OnScreenStats();

	EndDrawing();

}

void Renderer::LoadImage()
{
	mAssetManager.LoadImage();
}

void Renderer::ShutDown()
{
	UnloadTexture(mAssetManager.GetPlayerImage());
}

void Renderer::OnScreenStats()
{
	std::string direction;
	std::string state;
	std::string life;
	std::string race;

	switch (mCharacterMovement.GetPlayer().GetRace())
	{
	case Race::HUMAN:
		race = "HUMAN";
		break;

	case Race::UNDEAD:
		race = "UNDEADE";
		break;

	default:
		break;
	}

	switch (mCharacterMovement.GetPlayer().GetDirection())
	{
	case MovementDirection::UP:
		direction = "UP";
		break;

	case MovementDirection::DOWN:
		direction = "DOWN";
		break;

	case MovementDirection::LEFT:
		direction = "LEFT";
		break;

	case MovementDirection::RIGHT:
		direction = "RIGHT";
		break;

	case MovementDirection::DEFAULT_DIRECTION:
		direction = "DEFAULT";
		break;

	default:
		break;
	}
	switch (mCharacterMovement.GetPlayer().GetState())
	{
	case MovementState::IDLE:
		state = "IDLE";
		break;

	case MovementState::MOVING:
		state = "MOVING";
		break;

	default:
		break;
	}
	switch (mCharacterMovement.GetPlayer().GetClass())
	{
	case CharacterClass::WARRIOR:
		life = "Warrior";
		break;

	case CharacterClass::ARCHER:
		life = "Archer";
		break;

	case CharacterClass::MAGE:
		life = "Mage";
		break;

	case CharacterClass::PRIEST:
		life = "Priest";
		break;

	case CharacterClass::DEATH_KNIGHT:
		life = "Death Knight";
		break;

	case CharacterClass::DEFAULT_CLASS:
		life = "DEFAULT CLASS";
		break;

	default:
		break;
	}

	float dt = GetFrameTime() * mCharacterMovement.GetPlayer().GetVelocity();
	DrawText(TextFormat(("Location: \nX - %1.f \nY- %1.f"), mCharacterMovement.GetPlayer().GetPosX(), mCharacterMovement.GetPlayer().GetPosY()), 20, 20, 20, BLACK);
	DrawText(TextFormat(("Direction: %s"), direction.c_str()), 150, 20, 20, BLACK);
	DrawText(TextFormat(("State: %s"), state.c_str()), 400, 20, 20, BLACK);
	DrawText(TextFormat(("Race: %s"), race.c_str()), 600, 20, 20, BLACK);
	DrawText(TextFormat(("Velocity: %f"), mCharacterMovement.GetPlayer().GetVelocity()), 900, 20, 20, BLACK);

}
