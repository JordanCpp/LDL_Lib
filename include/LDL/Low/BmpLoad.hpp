#ifndef LDL_BmpLoad_hpp
#define LDL_BmpLoad_hpp

#include <LDL/Low/Config.hpp>
#include <LDL/Low/Point2u.hpp>
#include <LDL/Low/EHandler.hpp>
#include <LDL/Low/BmpFrmt.hpp>
#include <stdio.h>

class LDL_BmpLoader
{
public:
	LDL_BmpLoader(LDL_ErrorHandler* errorHandler);
	~LDL_BmpLoader();
	void Load(const char* path);
	const LDL_Point2u& Size();
	uint8_t Bpp();
	uint8_t LDL_FAR* Pixels();
private:
	void BgrToRgb();
	bool CheckOpen(const char* path);
	bool CheckFileHeader();
	bool CheckInfoHeader();
	bool ReadBytes();
	LDL_ErrorHandler* _ErrorHandler;
	uint8_t LDL_FAR* _Result;
	FILE* _Input;
	BmpFileHeader _FileHeader;
	BmpInfoHeader _InfoHeader;
	LDL_Point2u _Size;
	uint8_t _Bpp;
};

#endif
