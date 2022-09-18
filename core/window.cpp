#include "window.h"

#include<string>
#include"raylib.h"

using namespace windowRayCPP;

window::window(int screenWidth,int screenHeight,std::string titleWindow)
{
	this->screenWidth = screenWidth;
	this->screenHeight = screenHeight;

	this->titleWindow = titleWindow;

}

void window::init()
{
	InitWindow(this -> screenWidth, this ->screenHeight, titleWindow.c_str());
}

void window::setFPS(int fps)
{
	SetTargetFPS(fps);
}

void window::beginDrawing()
{
	BeginDrawing();
}

void window::endDrawing()
{
	EndDrawing();
}

void window::setBackgroundPlain(CLITERAL(Color) color)
{
	ClearBackground(color);
}

void window::drawTextWindow(std::string text,int xPosition,int yPosition,int fontSize,CLITERAL(Color) color)
{
	DrawText(text.c_str(),xPosition,yPosition,fontSize,color);
}

bool window::isWindowsClosed()
{
	return WindowShouldClose();
}

void window::close()
{
	CloseWindow();
}
