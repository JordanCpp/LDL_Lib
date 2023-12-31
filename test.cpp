#include <LDL/Low/Equal.hpp>
#include <LDL/Low/EventQ.hpp>
#include <LDL/Low/SoftSurf.hpp>
#include <LDL/Low/Conv.hpp>
#include <LDL/Low/Eventer.hpp>
#include <LDL/Cpp/Render.hpp>
#include <LDL/Low/EHandler.hpp>
#include <LDL/Low/String.hpp>
#include <LDL/Low/BaseWin.hpp>
#include <LDL/Low/BaseRend.hpp>
#include <LDL/Low/Palette.hpp>
#include <LDL/Low/BmpLoad.hpp>
#include <LDL/Low/FpsCount.hpp>
#include <LDL/Cpp/Library.hpp>
#include <LDL/Low/Errors.hpp>
#include <stdio.h>
#include <string.h>

void Test_LDL_Point2u()
{
	LDL_Vec2u point1;
	LDL_TEST_EQUAL(point1.x == 0);
	LDL_TEST_EQUAL(point1.y == 0);

	LDL_Vec2u point2(25, 45);
	LDL_TEST_EQUAL(point2.x == 25);
	LDL_TEST_EQUAL(point2.y == 45);
}

void Test_LDL_Color()
{
	LDL_Color color1;
	LDL_TEST_EQUAL(color1.r == 0);
	LDL_TEST_EQUAL(color1.g == 0);
	LDL_TEST_EQUAL(color1.b == 0);
	LDL_TEST_EQUAL(color1.a == 255);

	LDL_Color color2(1, 2, 3);
	LDL_TEST_EQUAL(color2.r == 1);
	LDL_TEST_EQUAL(color2.g == 2);
	LDL_TEST_EQUAL(color2.b == 3);
	LDL_TEST_EQUAL(color2.a == 255);

	LDL_Color color3(1, 2, 3, 4);
	LDL_TEST_EQUAL(color3.r == 1);
	LDL_TEST_EQUAL(color3.g == 2);
	LDL_TEST_EQUAL(color3.b == 3);
	LDL_TEST_EQUAL(color3.a == 4);
}

void Test_LDL_EventQueue()
{
	LDL_EventQueue queue;

	LDL_TEST_EQUAL(queue.IsEmpty() == true);
	LDL_TEST_EQUAL(queue.IsFull()  == false);

	LDL_Event src;

	src.Type = LDL_Events::IsQuit;
	queue.Enqueue(src);

	LDL_TEST_EQUAL(queue.IsEmpty() == false);
	LDL_TEST_EQUAL(queue.IsFull()  == false);

	LDL_Event dst;
	queue.Dequeue(dst);

	LDL_TEST_EQUAL(dst.Type == LDL_Events::IsQuit);
	LDL_TEST_EQUAL(queue.IsEmpty() == true);
	LDL_TEST_EQUAL(queue.IsFull() == false);

	for (size_t i = 0; i < LDL_EventQueueMax; i++)
	{
		src.Type = LDL_Events::IsQuit;
		queue.Enqueue(src);
	}

	LDL_TEST_EQUAL(queue.IsEmpty() == false);
	LDL_TEST_EQUAL(queue.IsFull()  == true);

	for (size_t j = 0; j < LDL_EventQueueMax; j++)
	{
		dst.Type = LDL_Events::IsQuit;
		queue.Dequeue(src);
	}

	LDL_TEST_EQUAL(queue.IsEmpty() == true);
	LDL_TEST_EQUAL(queue.IsFull()  == false);
}

void Test_LDL_Surface()
{
	LDL_RenderContext renderContext;
	LDL_Window window(&renderContext, LDL_Vec2u(0, 0), LDL_Vec2u(800, 600), "", LDL_WindowMode::Fixed);

	LDL_Surface surface(&renderContext, &window, LDL_Vec2u(640, 480), 1);

	LDL_TEST_EQUAL(surface.Pixels() != NULL);
	LDL_TEST_EQUAL(surface.Size().x == 640);
	LDL_TEST_EQUAL(surface.Size().y == 480);
	LDL_TEST_EQUAL(surface.Bpp()    == 1);
}

void Test_LDL_NumberToString()
{
	LDL_NumberToString numberToString;

	LDL_TEST_EQUAL(strcmp(numberToString.Convert(42), "42") == 0);
}

void Test_LDL_Eventer()
{
	LDL_Eventer eventer;

	LDL_TEST_EQUAL(eventer.Running() == true);

	LDL_Event event;

	LDL_TEST_EQUAL(eventer.Pop(event) == false);

	event.Type = LDL_Events::IsQuit;
	eventer.Push(event);
	LDL_TEST_EQUAL(eventer.Pop(event) == true);
	LDL_TEST_EQUAL(event.Type == LDL_Events::IsQuit);

	eventer.Stop();
	LDL_TEST_EQUAL(eventer.Running() == false);
}

void Test_LDL_Event()
{
	LDL_Event event;

	event.Type = LDL_Events::IsKeyboard;
	event.Keyboard.State = LDL_ButtonState::Pressed;
	event.Keyboard.Key = LDL_KeyboardKey::Enter;
	LDL_TEST_EQUAL(event.IsKeyPressed(LDL_KeyboardKey::Enter));

	event.Type = LDL_Events::IsKeyboard;
	event.Keyboard.State = LDL_ButtonState::Released;
	event.Keyboard.Key = LDL_KeyboardKey::Enter;
	LDL_TEST_EQUAL(event.IsKeyReleased(LDL_KeyboardKey::Enter));

	event.Type = LDL_Events::IsMouseClick;
	event.Mouse.State = LDL_ButtonState::Pressed;
	event.Mouse.Button = LDL_MouseButton::Left;
	LDL_TEST_EQUAL(event.IsMousePressed(LDL_MouseButton::Left));

	event.Type = LDL_Events::IsMouseClick;
	event.Mouse.State = LDL_ButtonState::Released;
	event.Mouse.Button = LDL_MouseButton::Left;
	LDL_TEST_EQUAL(event.IsMouseReleased(LDL_MouseButton::Left));
}

void Test_LDL_ErrorHandler()
{
	LDL_ErrorHandler errorHandler;

	LDL_TEST_EQUAL(errorHandler.Ok() == true);
	LDL_TEST_EQUAL(errorHandler.Message() == NULL);

	errorHandler.Message("Error!");
	LDL_TEST_EQUAL(errorHandler.Ok() == false);
	LDL_TEST_EQUAL(strcmp(errorHandler.Message(), "Error!") == 0);
}

void Test_LDL_String()
{
	LDL_String string;

	LDL_TEST_EQUAL(string.CStr() == NULL);
	LDL_TEST_EQUAL(string.Capacity() == 0);
	LDL_TEST_EQUAL(string.Size() == 0);

	string.Assign("Hello World!");
	LDL_TEST_EQUAL(strcmp(string.CStr(), "Hello World!") == 0);
	LDL_TEST_EQUAL(string.CStr() != NULL);
	LDL_TEST_EQUAL(string.Capacity() == 15);
	LDL_TEST_EQUAL(string.Size() == 12);
}

void Test_LDL_BaseWindow()
{
	LDL_BaseWindow baseWindow(LDL_Vec2u(1, 2), LDL_Vec2u(320, 200), "Title!");

	LDL_TEST_EQUAL(baseWindow.Pos().x == 1);
	LDL_TEST_EQUAL(baseWindow.Pos().y == 2);
	LDL_TEST_EQUAL(baseWindow.Size().x == 320);
	LDL_TEST_EQUAL(baseWindow.Size().y == 200);
	LDL_TEST_EQUAL(strcmp(baseWindow.Title(), "Title!") == 0);
}

void Test_LDL_BaseRender()
{
	LDL_BaseRender baseRender(LDL_Vec2u(320, 200));

	LDL_TEST_EQUAL(baseRender.Size().x == 320);
	LDL_TEST_EQUAL(baseRender.Size().y == 200);

	baseRender.SetColor(LDL_Color(1, 2, 3));

	LDL_TEST_EQUAL(baseRender.Color().r == 1);
	LDL_TEST_EQUAL(baseRender.Color().g == 2);
	LDL_TEST_EQUAL(baseRender.Color().b == 3);
}

void Test_LDL_Palette()
{
	const size_t count = 256;

	LDL_Palette palette(count);

	LDL_TEST_EQUAL(palette.Count() == count);

	for (size_t i = 0; i < count; i++)
	{
		palette.Red(i, 1);
		palette.Green(i, 2);
		palette.Blue(i, 3);
	}

	LDL_Color* colors = palette.Colors();

	for (size_t j = 0; j < count; j++)
	{
		LDL_TEST_EQUAL(colors[j].r == 1);
		LDL_TEST_EQUAL(colors[j].g == 2);
		LDL_TEST_EQUAL(colors[j].b == 3);
	}
}

void Test_BmpLoader()
{
	LDL_BmpLoader bmpLoader;
	
	LDL_TEST_EQUAL(bmpLoader.Load("C:/4U5YEL4DEAOYnr9UT7e6bQ.bmp") == true);
	LDL_TEST_EQUAL(bmpLoader.Size().x == 536);
	LDL_TEST_EQUAL(bmpLoader.Size().y == 349);
	LDL_TEST_EQUAL(bmpLoader.Bpp() == 3);
}

void Test_LDL_Error()
{
	LDL_TEST_EQUAL(LDL_IsError() == false);

	LDL_AddError("Error!");
	LDL_TEST_EQUAL(LDL_IsError() == true);
	LDL_TEST_EQUAL(strcmp(LDL_GetError(), "Error!") == 0);
}

void Tests()
{
	Test_LDL_Point2u();
	Test_LDL_Color();
	Test_LDL_EventQueue();
	Test_LDL_Surface();
	Test_LDL_NumberToString();
	Test_LDL_Eventer();
	Test_LDL_Event();
	Test_LDL_ErrorHandler();
	Test_LDL_String();
	Test_LDL_BaseWindow();
	Test_LDL_BaseRender();
	Test_LDL_Palette();
	//Test_BmpLoader();
	Test_LDL_Error();
}

int main()
{
	Tests();

	return 0;
}
