
#ifndef SOUND_SOUNDELEMENT_H_
#define SOUND_SOUNDELEMENT_H_

#include<string>
#include"raylib.h"


namespace SOUNDRAYCPP
{
	class SoundElement
	{
		private:
			std::string filename;
			Sound sound;
		public:
			SoundElement(std::string filename);
			virtual ~SoundElement();
	};
}



#endif /* SOUND_SOUNDELEMENT_H_ */
