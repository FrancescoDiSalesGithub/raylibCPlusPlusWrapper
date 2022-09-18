
#include "SoundElement.h"

using namespace SOUNDRAYCPP;

SoundElement::SoundElement(std::string filename)
{
	this->filename = filename;
	this->sound = LoadSound(this->filename.c_str());

}

SoundElement::~SoundElement()
{
	UnloadSound(this->sound);
}

