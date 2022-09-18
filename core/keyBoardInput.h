#include"raylib.h"

#ifndef CORE_KEYBOARDINPUT_H_
#define CORE_KEYBOARDINPUT_H_

namespace keyboardInputRayCPP
{
	class keyBoardInput
	{
		public:
			bool isKeyDownUp();
			bool isKeyDownDown();
			bool isKeyDownLeft();
			bool isKeyDownRight();


	};

}

#endif /* CORE_KEYBOARDINPUT_H_ */
