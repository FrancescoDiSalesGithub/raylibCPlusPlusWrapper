
#ifndef CORE_MOUSEINPUT_H_
#define CORE_MOUSEINPUT_H_

#include "raylib.h"

namespace mouseInputRayCPP
{

	class MouseInput
	{
		public:
			bool isMouseButtonLeft();
			bool isMouseButtonRight();
			bool isMouseButtonMiddle();
			bool isMouseButtonBack();
			bool isMouseButtonForward();
			bool isMouseButtonExtra();
			bool isMouseButtonSide();

			Vector2 mousePosition();
			int mouseWheelMove();
	};
}



#endif /* CORE_MOUSEINPUT_H_ */
