#include "musicElement.h"

using namespace MUSICELEMENTRAYCPP;

musicElement::musicElement(std::string filename)
{

	this->filename = filename;
	this->music = LoadMusicStream(this->filename.c_str());

}

musicElement::~musicElement()
{
	UnloadMusicStream(this->music);
}

