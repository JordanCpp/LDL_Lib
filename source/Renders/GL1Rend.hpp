#ifndef LDL_Renders_GL1Rend_hpp
#define LDL_Renders_GL1Rend_hpp

#include <LDL/Low/Abstract.hpp>
#include <LDL/Low/Mat4f.hpp>

class LDL_GL1Render : public LDL_IRender
{
public:
	LDL_GL1Render(LDL_IRenderContext* context, LDL_IWindow* window);
	~LDL_GL1Render();
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
	LDL_IWindow* _Window;
	LDL_Color _Color;
	LDL_Mat4f _Projection;
	LDL_Mat4f _ModelView;
};

#endif
