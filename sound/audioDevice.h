
#ifndef SOUND_AUDIODEVICE_H_
#define SOUND_AUDIODEVICE_H_

#include"raylib.h"

namespace AUDIODEVICERAYCPP
{
	class audioDevice
	{

		public:
			audioDevice();

			void playMusic(Music music);
			void pauseMusic(Music music);
			void restartMusic(Music music);
			void resumeMusic(Music music);
			void stopMusic(Music music);

			void playSound(Sound sound);
			void playSoundMulti(Sound sound);

			void setSoundVolume(Sound sound,float volume);

			virtual ~audioDevice();
			void removeBufferSoundMulti();
	};
}



#endif /* SOUND_AUDIODEVICE_H_ */
