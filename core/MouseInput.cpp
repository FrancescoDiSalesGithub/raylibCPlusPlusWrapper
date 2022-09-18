#include "MouseInput.h"
#include "raylib.h"

using namespace mouseInputRayCPP;

bool MouseInput::isMouseButtonBack()
{
	return IsMouseButtonPressed(MOUSE_BUTTON_BACK);
}

bool MouseInput::isMouseButtonForward()
{
	return IsMouseButtonPressed(MOUSE_BUTTON_FORWARD);
}

bool MouseInput::isMouseButtonLeft()
{
	return IsMouseButtonPressed(MOUSE_BUTTON_LEFT);
}

bool MouseInput::isMouseButtonRight()
{
	return IsMouseButtonPressed(MOUSE_BUTTON_RIGHT);
}

bool MouseInput::isMouseButtonMiddle()
{
	return IsMouseButtonPressed(MOUSE_BUTTON_MIDDLE);
}

bool MouseInput::isMouseButtonExtra()
{
	return IsMouseButtonPressed(MOUSE_BUTTON_EXTRA);
}

bool MouseInput::isMouseButtonSide()
{
	return IsMouseButtonPressed(MOUSE_BUTTON_SIDE);
}

Vector2 MouseInput::mousePosition()
{
	return GetMousePosition();
}
