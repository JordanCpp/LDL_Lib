#ifndef LDL_Windows_GdiRend_hpp
#define LDL_Windows_GdiRend_hpp

#include <LDL/Low/Abstract.hpp>
#include <LDL/Low/BaseRend.hpp>
#include "GdiWin.hpp"
#include "WinX.hpp"

class LDL_GdiRender : public LDL_IRender
{
public:
	LDL_GdiRender(LDL_IRenderContext* context, LDL_IWindow* window);
	~LDL_GdiRender();
	void SetColor(const LDL_Color& color);
	void Line(const LDL_Vec2u& first, const LDL_Vec2u& last);
	void Fill(const LDL_Vec2u& pos, const LDL_Vec2u& size);
	void Clear();
	void Begin();
	void End();
	void Draw(LDL_ISurface* surface, const LDL_Vec2u& pos);
	void Draw(LDL_ITexture* texture, const LDL_Vec2u& pos);
private:
	LDL_IRenderContext* _RenderContext;
	LDL_BaseRender      _BaseRender;
	LDL_IWindow* _Window;
	LDL_GdiWindow* _GdiWindow;
	PAINTSTRUCT _PaintStruct;
	HPEN _Pen;
	HBRUSH _Brush;
};

#endif
