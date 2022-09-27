
#ifndef GRAPHICS_SHAPECANVAS_H_
#define GRAPHICS_SHAPECANVAS_H_

#include"raylib.h"

namespace SHAPECANVASRAYCPP
{
	class ShapeCanvas
	{
        private:
            Rectangle rec;

		public:
			ShapeCanvas();
            ShapeCanvas(Rectangle rec);

			Rectangle createRectangleObject();
			void setXPosition(float x);
			void setYPosition(float y);
            void setRectangleWidth(float width);
            void setRectangleHeight(float height);

            float getXPosition();
            float getYPosition();
            float getRectangleWidth();
            float getRectangleHeight();
            Rectangle getRectangleObject();


			void drawRectangle(int xPosition,int yPosition,int width,int height,Color color);
			void drawRectangleGradient(int xPosition,int yPosition,int width,int height,Color color,Color color2);
			void drawRectangleLines(int xPosition,int yPosition,int width,int height,Color color);

			void drawCircle(int xPosition, int yPosition, int width,Color color);
			void drawCircleGradient(int xPosition, int yPosition, int width,Color color,Color color2);
			void drawCircleLine(int xPosition, int yPosition, int width,Color color);

			void drawTriangle(Vector2 vertexP1,Vector2 vertexP2,Vector2 vertexP3,Color color);
			void drawTriangleLines(Vector2 vertexP1,Vector2 vertexP2,Vector2 vertexP3,Color color);

			void drawPoly(Vector2 center,int sides,float radius,float rotation,Color color);
			void drawPolyLines(Vector2 center,int sides,float radius,float rotation,Color color);

			void drawLine(int startPosX,int startPosY,int endPosX,int endPosY,Color color);

			void drawRectangleObject(Color color);
			void drawRectangleObject(Rectangle rectangle,Color color);

	};

}


#endif /* GRAPHICS_SHAPECANVAS_H_ */
