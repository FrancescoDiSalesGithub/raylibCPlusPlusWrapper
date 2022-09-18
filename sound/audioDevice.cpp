
#include "audioDevice.h"
#include "raylib.h"

using namespace AUDIODEVICERAYCPP;


audioDevice::audioDevice()
{

}

void audioDevice::audioDeviceInit()
{
	InitAudioDevice();
}

void audioDevice::audioDeviceStop()
{
	CloseAudioDevice();
}

void audioDevice::playMusic(Music music)
{
	PlayMusicStream(music);
}

void audioDevice::pauseMusic(Music music)
{
	PauseMusicStream(music);
}

void audioDevice::restartMusic(Music music)
{
	StopMusicStream(music);
	PlayMusicStream(music);
}

void audioDevice::resumeMusic(Music music)
{
	ResumeMusicStream(music);
}

void audioDevice::stopMusic(Music music)
{
	StopMusicStream(music);
}

void audioDevice::playSound(Sound sound)
{
	PlaySound(sound);
}

void audioDevice::playSoundMulti(Sound sound)
{
	PlaySoundMulti(sound);
}

void audioDevice::setSoundVolume(Sound sound,float volume)
{
	SetSoundVolume(sound, volume);
}

void audioDevice::removeBufferSoundMulti()
{
	StopSoundMulti();
}
