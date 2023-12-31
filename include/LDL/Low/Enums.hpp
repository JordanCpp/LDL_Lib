#ifndef LDL_Low_Enums_hpp
#define LDL_Low_Enums_hpp

class LDL_ButtonState
{
public:
	enum
	{
		Pressed = 1,
		Released
	};
};

class LDL_KeyboardKey
{
public:
	enum
	{
		Unknown = 1,
		LSystem,
		RSystem,
		Menu,
		Semicolon,
		Slash,
		Equal,
		Hyphen,
		LBracket,
		RBracket,
		Comma,
		Period,
		Quote,
		Backslash,
		Tilde,
		Escape,
		Space,
		Enter,
		Backspace,
		Tab,
		PageUp,
		PageDown,
		End,
		Home,
		Insert,
		Delete,
		Add,
		Subtract,
		Multiply,
		Divide,
		Pause,
		F1,
		F2,
		F3,
		F4,
		F5,
		F6,
		F7,
		F8,
		F9,
		F10,
		F11,
		F12,
		F13,
		F14,
		F15,
		Left,
		Right,
		Up,
		Down,
		Numpad0,
		Numpad1,
		Numpad2,
		Numpad3,
		Numpad4,
		Numpad5,
		Numpad6,
		Numpad7,
		Numpad8,
		Numpad9,
		A,
		Z,
		E,
		R,
		T,
		Y,
		U,
		I,
		O,
		P,
		Q,
		S,
		D,
		F,
		G,
		H,
		J,
		K,
		L,
		M,
		W,
		X,
		C,
		V,
		B,
		N,
		Num0,
		Num1,
		Num2,
		Num3,
		Num4,
		Num5,
		Num6,
		Num7,
		Num8,
		Num9,
		Leftshift,
		RightShift,
		LeftControl,
		RightControl
	};
};

class LDL_MouseButton
{
public:
	enum
	{
		Left = 1,
		Right,
		Middle
	};
};

class LDL_MouseScroll
{
public:
	enum
	{
		Vertical = 1,
		Horizontal
	};
};

class LDL_RenderMode
{
public:
	enum
	{
		Software = 1,
		GDI,
		OpenGL1,
		OpenGL3
	};
};

class LDL_WindowMode
{
public:
	enum
	{
		Resized = 1,
		Fixed,
		FullScreen
	};
};

#endif 
