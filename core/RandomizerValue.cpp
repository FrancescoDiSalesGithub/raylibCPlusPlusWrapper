

#include "RandomizerValue.h"

#include "raylib.h"

using namespace RANDOMIZERRAYCPP;

RandomizerValue::RandomizerValue(int beginSeed,int endSeed)
{

	this->beginSeed = beginSeed;
	this->endSeed = endSeed;

}

int RandomizerValue::getRandomizeValue()
{
	return GetRandomValue(this->beginSeed,this->endSeed);
}


