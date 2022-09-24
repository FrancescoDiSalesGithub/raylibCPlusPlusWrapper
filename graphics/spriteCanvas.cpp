
#include "spriteCanvas.h"
#include"raylib.h"


using namespace SPRITERAYCPP;

spriteCanvas::spriteCanvas()
{

}

spriteCanvas::spriteCanvas(std::string filename)
{
	this->filename = filename;
}


void spriteCanvas::initTexture2D()
{
    this->texture2D = LoadTexture(this->filename.c_str());
}

void spriteCanvas::unloadTexture2D()
{
    UnloadTexture(this->texture2D);
}


void spriteCanvas::draw(Vector2 position,Color color)
{
	DrawTexture(this->texture2D, position.x, position.y, color);
}

void spriteCanvas::drawRec(Vector2 position,Rectangle rec)
{
    DrawTextureRec(this->texture2D,rec,position,WHITE);
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
