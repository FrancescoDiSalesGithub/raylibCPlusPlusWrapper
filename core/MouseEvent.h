#ifndef CORE_MOUSEEVENT_H_
#define CORE_MOUSEEVENT_H_

namespace MOUSEEVENTRAYCPP
{
	class MouseEvent
	{
		public:
		MouseEvent();
		void OnClick();
		void OnHover();
		virtual ~MouseEvent();
	};
}



#endif /* CORE_MOUSEEVENT_H_ */
