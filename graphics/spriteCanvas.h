
#ifndef GRAPHICS_SPRITECANVAS_H_
#define GRAPHICS_SPRITECANVAS_H_

#include"raylib.h"
#include<string>

namespace SPRITERAYCPP
{
	class spriteCanvas
	{

		private:
			std::string filename;
			Texture2D texture2D;
		public:
		    	spriteCanvas();
			spriteCanvas(std::string filename);

			void draw(Vector2 position,Color color);
			void drawRec(Vector2 position,Rectangle rec);

            		void initTexture2D();
            		void unloadTexture2D();

			Texture2D getTexture2D();
			std::string getFileName();

			void setTexture2D(Texture2D texture2D);
			void setFileName(std::string filename);


	};
}



#endif /* GRAPHICS_SPRITECANVAS_H_ */
