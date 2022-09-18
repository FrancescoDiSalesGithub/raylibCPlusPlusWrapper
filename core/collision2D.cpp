#include "collision2D.h"

#include "raylib.h"

using namespace COLLISION2DRAYCPP;

collision2D::collision2D()
{

}


bool collision2D::checkCollisionRectangle(Rectangle elementFrom,Rectangle elementTo)
{
	return CheckCollisionRecs(elementFrom, elementFrom);
}

