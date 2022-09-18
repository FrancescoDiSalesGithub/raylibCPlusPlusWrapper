

#include "ShapeCanvas.h"

#include "raylib.h"

using namespace SHAPECANVASRAYCPP;


ShapeCanvas::ShapeCanvas()
{

}

void ShapeCanvas::drawRectangle(int posX, int posY, int width, int height,Color color)
{
	DrawRectangle(posX,posY,width,height,color);
}

void ShapeCanvas::drawRectangleGradient(int xPosition,int yPosition,int width,int height,Color color1,Color color2)
{
	DrawRectangleGradientH(xPosition, yPosition, width, height, color1, color2);
}

void ShapeCanvas::drawRectangleLines(int xPosition,int yPosition,int width,int height,Color color)
{
	DrawRectangleLines(xPosition, yPosition, width, height, color);
}

void ShapeCanvas::drawCircle(int xPosition,int yPosition,int width,Color color)
{
	DrawCircle(yPosition, xPosition, width, color);
}

void ShapeCanvas::drawCircleGradient(int xPosition, int yPosition, int width,Color color,Color color2)
{
	DrawCircleGradient(xPosition, yPosition, width, color, color2);
}

void ShapeCanvas::drawCircleLine(int xPosition, int yPosition, int width,Color color)
{
	DrawCircleLines(xPosition, yPosition, width, color);
}

void ShapeCanvas::drawTriangle(Vector2 vertexP1,Vector2 vertexP2,Vector2 vertexP3,Color color)
{
	DrawTriangle(vertexP1, vertexP2, vertexP3, color);
}

void ShapeCanvas::drawTriangleLines(Vector2 vertexP1,Vector2 vertexP2,Vector2 vertexP3,Color color)
{
	DrawTriangleLines(vertexP1, vertexP2, vertexP3, color);
}

void ShapeCanvas::drawPoly(Vector2 center,int sides,float radius,float rotation,Color color)
{
	DrawPoly(center, sides, radius, rotation, color);
}

void ShapeCanvas::drawPolyLines(Vector2 center,int sides,float radius,float rotation,Color color)
{
	DrawPolyLines(center, sides, radius, rotation, color);
}

void ShapeCanvas::drawLine(int startPosX,int startPosY,int endPosX,int endPosY,Color color)
{
	DrawLine(startPosX, startPosY, endPosX, endPosY, color);
}
