#ifndef LDL_Cpp98_Window_hpp
#define LDL_Cpp98_Window_hpp

#include <LDL/Cpp/Window.hpp>
#include <LDL/Cpp98/Vec2u.hpp>

namespace LDL
{
	namespace Graphics
	{
		class Window: public LDL_Window
		{
		public:
			Window(LDL_RenderContext* context, const LDL_Vec2u& pos, const LDL_Vec2u& size, const char* title, size_t mode = LDL_WindowMode::Resized) :
				LDL_Window(context, pos, size, title, mode)
			{
			}
		private:
		};
	}
}

#endif
