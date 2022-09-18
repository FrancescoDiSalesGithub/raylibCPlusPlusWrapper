/*
 * gameCamera.h
 *
 *  Created on: 12 set 2022
 *      Author: frank
 */

#ifndef CORE_GAMECAMERA_H_
#define CORE_GAMECAMERA_H_

#include"raylib.h"

namespace gameCamera2D
{
	class gameCamera
	{

	private:
		Camera2D camera;

	public:

		void beginMode2D();
		void endMode2D();

	    void setOffset(Vector2 offset);
	    void setTarget(Vector2 target);
	    void setRotation(float rotation);
	    void setZoom(float zoom);

	    Vector2 getOffset();
	    Vector2 setTarget();
	    float setRotation();
	    float setZoom();



	};
}

namespace gameCamera3D
{
	class gameCamera
	{

	};
}


#endif /* CORE_GAMECAMERA_H_ */
