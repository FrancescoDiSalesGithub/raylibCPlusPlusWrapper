
#include<string>
#include"raylib.h"

#ifndef CORE_WINDOW_H_
#define CORE_WINDOW_H_


namespace windowRayCPP
{
class window
{

	private:

		int screenWidth;
		int screenHeight;
		std::string titleWindow;

	public:

		window(int screenWidth,int screenHeight,std::string titleWindow);


		void init();


		void setFPS(int fps);

		void beginDrawing();
		void endDrawing();

		void setBackgroundPlain(CLITERAL (Color) color);
		void drawTextWindow(std::string text,int xPosition,int yPosition,int fontSize,CLITERAL(Color) color);
		void drawTexture(Texture2D texture,float positionX,float positionY,Color color);

		void undrawTexture(Texture2D texture);

		bool isWindowsClosed();
		void close();

		bool windowClosedRequest();

};

}


#endif /* CORE_WINDOW_H_ */
