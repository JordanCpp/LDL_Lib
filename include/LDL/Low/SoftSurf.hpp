#ifndef LDL_Low_SoftSurf_hpp
#define LDL_Low_SoftSurf_hpp

#include <LDL/Low/Abstract.hpp>

class LDL_SoftwareSurface : public LDL_ISurface
{
public:
	LDL_SoftwareSurface(const LDL_Vec2u& size, uint8_t bpp);
	LDL_SoftwareSurface(const LDL_Vec2u& size, uint8_t LDL_FAR* bytes, uint8_t bpp);
	~LDL_SoftwareSurface();
	uint8_t LDL_FAR* Pixels();
	uint8_t Bpp();
	const LDL_Vec2u& Size();
private:
	uint8_t _Bpp;
	uint8_t LDL_FAR* _Pixels;
	LDL_Vec2u _Size;
};

#endif
