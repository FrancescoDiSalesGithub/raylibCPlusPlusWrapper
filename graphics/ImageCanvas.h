
#ifndef GRAPHICS_IMAGECANVAS_H_
#define GRAPHICS_IMAGECANVAS_H_

#include<string>
#include"raylib.h"

namespace IMAGERAYCPP
{
	class ImageCanvas
	{
		private:
			std::string filename;
			Image image;

		public:
			ImageCanvas(std::string filename);
			Texture2D loadImage();
			void unloadImage();
	};

}


#endif /* GRAPHICS_IMAGECANVAS_H_ */
