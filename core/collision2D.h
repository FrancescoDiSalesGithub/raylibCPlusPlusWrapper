#ifndef CORE_COLLISION2D_H_
#define CORE_COLLISION2D_H_

#include"raylib.h"

namespace COLLISION2DRAYCPP
{
	class collision2D
	{
		public:
			collision2D();
			bool checkCollisionRectangle(Rectangle elementFrom,Rectangle elementTo);

	};
}



#endif /* CORE_COLLISION2D_H_ */
