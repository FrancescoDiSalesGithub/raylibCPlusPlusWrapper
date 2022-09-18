#ifndef GRAPHICS_GIFCANVAS_H_
#define GRAPHICS_GIFCANVAS_H_

#include"raylib.h"
#include<string>

namespace GIFRAYCPP
{


	class gifCanvas
	{
		private:
			std::string path;

			int* frame = NULL;
			int frameDelay;
			int frameCounter;

			Image	gifImage;
			Texture2D texture2D;

		public:
			gifCanvas(std::string path,int* frame);
			gifCanvas(std::string path,int* frame,int frameDelay,int frameCounter);

			Image loadGif();
			void doCycle();

			Texture2D load();
			void UpdateTexture();
			void DrawTexture();

			virtual ~gifCanvas();

	};
}


#endif /* GRAPHICS_GIFCANVAS_H_ */
