
#include "GameTimer.h"

#include "raylib.h"

using namespace GAMETIMERRAYCPP;


GameTimer::GameTimer(int FPS,int seconds)
{
	this->FPS = FPS;
	this->seconds = seconds;
}

void GameTimer::setFPS(int fps)
{
	this->FPS = fps;
}

void GameTimer::setSeconds(int seconds)
{
	this->seconds = seconds;
}

int GameTimer::getFPS()
{
	return FPS;
}

int GameTimer::getSeconds()
{
	return seconds;
}

int GameTimer::deltaTime()
{
	return this->FPS*this->seconds;
}


int GameTimer::endTimeCycle(int frameCounter)
{
	return (frameCounter/this->deltaTime())%2;
}


