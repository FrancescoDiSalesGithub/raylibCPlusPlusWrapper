#include "keyBoardInput.h"
#include "raylib.h"

using namespace keyboardInputRayCPP;

bool keyBoardInput::isKeyDownDown()
{
	if(IsKeyDown(KEY_DOWN))
		return true;

	return false;
}

bool keyBoardInput::isKeyDownUp()
{
	if(IsKeyDown(KEY_UP))
			return true;

		return false;
}

bool keyBoardInput::isKeyDownLeft()
{
	if(IsKeyDown(KEY_LEFT))
		return true;

	return false;
}

bool keyBoardInput::isKeyDownRight()
{
	if(IsKeyDown(KEY_RIGHT))
		return true;

	return false;
}
