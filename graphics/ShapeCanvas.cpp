#include "ShapeCanvas.h"

#include "raylib.h"

using namespace SHAPECANVASRAYCPP;


ShapeCanvas::ShapeCanvas()
{

}

ShapeCanvas::ShapeCanvas(Rectangle rec)
{
    this->rec = rec;
}

void ShapeCanvas::setRectangleHeight(float height)
{
    rec.height = height;
}

void ShapeCanvas::setRectangleWidth(float width)
{
    rec.width = width;
}

void ShapeCanvas::setXPosition(float xPosition)
{
    rec.x = xPosition;
}

void ShapeCanvas::setYPosition(float yPosition)
{
    rec.y = yPosition;
}

float ShapeCanvas::getRectangleHeight()
{
    return rec.height;
}

float ShapeCanvas::getRectangleWidth()
{
    return rec.width;
}

float ShapeCanvas::getXPosition()
{
    return rec.x;
}

float ShapeCanvas::getYPosition()
{
    return rec.y;
}


Rectangle ShapeCanvas::createRectangleObject()
{
    Rectangle objectRectangle;
    return     objectRectangle;
}

void ShapeCanvas::setRectangleWidth(float width)
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
