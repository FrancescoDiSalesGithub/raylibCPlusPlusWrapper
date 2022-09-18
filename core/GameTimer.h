
#ifndef CORE_GAMETIMER_H_
#define CORE_GAMETIMER_H_

namespace GAMETIMERRAYCPP
{
	class GameTimer
	{
		private:
			int FPS;
			int seconds;
			int frameCounter;

		public:
			GameTimer(int FPS,int seconds);

			int getSeconds();
			int getFPS();
			int getFrameCounter();

			void setSeconds(int seconds);
			void setFPS(int fps);
			void setFrameCounter(int frameCounter);

			int deltaTime();
			bool timeCycleTrigger();

			int endTimeCycle(int framecounter);


	};
}



#endif /* CORE_GAMETIMER_H_ */
