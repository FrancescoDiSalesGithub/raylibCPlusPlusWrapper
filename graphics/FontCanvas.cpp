#include "FontCanvas.h"
#include "raylib.h"

using namespace FONTCANVASRAYCPP;

FontCanvas::FontCanvas(std::string filename)
{
	this->filename = filename;

	if(this->filename.length() == 0)
		throw "filename string is empty";

	this->font = LoadFont(this->filename.c_str());

}

FontCanvas::~FontCanvas()
{
	UnloadFont(this->font);
}

void FontCanvas::drawFont(const char* message,Vector2 position,float size,float spacing,Color color)
{
	DrawTextEx(this->font,message,position,size,spacing,color);
}

