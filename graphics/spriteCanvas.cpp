
#include "spriteCanvas.h"

using namespace SPRITERAYCPP;

spriteCanvas::spriteCanvas(std::string filename)
{
	this->filename = filename;
	this->texture2D = LoadTexture(this->filename.c_str());
}

spriteCanvas::~spriteCanvas()
{
	UnloadTexture(this->texture2D);
}

void spriteCanvas::draw(Vector2 position,Color color)
{
	DrawTexture(this->texture2D, position.x, position.y, color);
}

void spriteCanvas::setFileName(std::string filename)
{
	this->filename = filename;
}

void spriteCanvas::setTexture2D(Texture2D texture2D)
{
	this->texture2D = texture2D;
}

Texture2D spriteCanvas::getTexture2D()
{
	return this->texture2D;
}

std::string spriteCanvas::getFileName()
{
	return this->filename;
}
