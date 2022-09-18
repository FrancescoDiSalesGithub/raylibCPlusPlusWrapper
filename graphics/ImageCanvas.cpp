
#include "ImageCanvas.h"

#include<string>
#include"raylib.h"

using namespace IMAGERAYCPP;


ImageCanvas::ImageCanvas(std::string filename)
{

	this->filename = filename;
	this->image = LoadImage(this->filename.c_str());

}

Texture2D ImageCanvas::loadImage()
{

	return LoadTextureFromImage(this->image);
}
void ImageCanvas::unloadImage()
{
	UnloadImage(this->image);
}
