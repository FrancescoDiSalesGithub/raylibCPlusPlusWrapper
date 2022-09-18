
#include "GameTimer.h"

#include "raylib.h"

using namespace GAMETIMERRAYCPP;


GameTimer::GameTimer(int FPS,int seconds)
{
	this->FPS = FPS;
	this->seconds = seconds;

	this->frameCounter = 0;

}

void GameTimer::setFPS(int fps)
{
	this->FPS = fps;
}

void GameTimer::setSeconds(int seconds)
{
	this->seconds = seconds;
}

void GameTimer::setFrameCounter(int frameCounter)
{
	this->frameCounter = frameCounter;
}


int GameTimer::getFPS()
{
	return FPS;
}

int GameTimer::getSeconds()
{
	return seconds;
}

int GameTimer::getFrameCounter()
{
	return frameCounter;
}

int GameTimer::deltaTime()
{
	return this->FPS*this->seconds;
}

int GameTimer::endTimeCycle(int frameCounter)
{
	return (frameCounter/this->deltaTime())%2;
}

bool GameTimer::timeCycleTrigger()
{
	frameCounter++;

	if(this->endTimeCycle(frameCounter) == 1)
	{
		frameCounter = 0;
		return true;
	}

	return false;
}






