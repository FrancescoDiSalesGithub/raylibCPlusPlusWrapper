
#ifndef CORE_GAMETIMER_H_
#define CORE_GAMETIMER_H_

namespace GAMETIMERRAYCPP
{
	class GameTimer
	{
		private:
			int FPS;
			int seconds;
		public:
			GameTimer(int FPS,int seconds);

			int getSeconds();
			int getFPS();

			void setSeconds(int seconds);
			void setFPS(int fps);

			int deltaTime();
			int endTimeCycle(int framecounter);

	};
}



#endif /* CORE_GAMETIMER_H_ */
