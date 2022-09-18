
#include "SoundElement.h"
#include<string>

using namespace SOUNDRAYCPP;

SoundElement::SoundElement(std::string filename)
{
	this->filename = filename;
	this->sound = LoadSound(this->filename.c_str());

}


std::string SoundElement::getFileName()
{
	return filename;
}

Sound SoundElement::getSound()
{
	return sound;
}

void SoundElement::unloadSound()
{
	UnloadSound(this->sound);
}
