
#ifndef SOUND_MUSICELEMENT_H_
#define SOUND_MUSICELEMENT_H_

#include<string>
#include"raylib.h"

namespace MUSICELEMENTRAYCPP
{
	class musicElement
	{
		private:
			std::string filename;
			Music music;
		public:
			musicElement(std::string filename);
			virtual ~musicElement();
	};
}



#endif /* SOUND_MUSICELEMENT_H_ */
