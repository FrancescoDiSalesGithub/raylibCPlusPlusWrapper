#ifndef GRAPHICS_FONTCANVAS_H_
#define GRAPHICS_FONTCANVAS_H_

#include"raylib.h"
#include <string>

namespace FONTCANVASRAYCPP
{
	class FontCanvas
	{
		private:
			std::string filename;
			Font font;
		public:
			FontCanvas(std::string filename);
			void drawFont(const char* message,Vector2 position,float size,float spacing,Color color);
			virtual ~FontCanvas();
	};
}



#endif /* GRAPHICS_FONTCANVAS_H_ */
