/*
 * RandomizerValue.h
 *
 *  Created on: 18 set 2022
 *      Author: frank
 */

#ifndef CORE_RANDOMIZERVALUE_H_
#define CORE_RANDOMIZERVALUE_H_

namespace RANDOMIZERRAYCPP
{
	class RandomizerValue
	{
		private:
			int beginSeed;
			int endSeed;
		public:
			RandomizerValue(int beginSeed,int endSeed);
			int getRandomizeValue();

	};

}


#endif /* CORE_RANDOMIZERVALUE_H_ */
