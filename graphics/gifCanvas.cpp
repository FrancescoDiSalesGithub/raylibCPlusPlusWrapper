
#include "gifCanvas.h"
#include "../systemlog/systemConstants.h"

#include "raylib.h"

using namespace GIFRAYCPP;
using namespace SYSCONSTANTSRAY;


gifCanvas::gifCanvas(std::string path,int* frame)
{
	this->path = path;

	this->frame = frame;
	this->frameCounter = 0;
	this->frameDelay = 0;


	if(frame != NULL)
	{
		this->gifImage = LoadImageAnim(this->path.c_str(),this->frame);
		this->texture2D = LoadTextureFromImage(gifImage);
	}

	else
		throw "frame pointer is null";

}


gifCanvas::gifCanvas(std::string path,int* frame,int frameDelay,int frameCounter)
{
	this->path = path;

	this->frame = frame;
	this->frameCounter = frameCounter;
	this->frameDelay = frameDelay;
}

gifCanvas::~gifCanvas()
{
	UnloadTexture(this->texture2D);
	UnloadImage(this->gifImage);
}

