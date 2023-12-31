#ifndef LDL_Cpp_Library_hpp
#define LDL_Cpp_Library_hpp

#include <LDL/Low/Creators.hpp>

class LDL_Library
{
public:
	LDL_Library(const char* path)
	{
		_Library = LDL_LibraryCreate(path);
	}

	~LDL_Library()
	{
		LDL_Destroy(_Library);
	}

	LDL_VoidFuncPtr Function(const char* name)
	{
		return _Library->Function(name);
	}
private:
	LDL_ILibrary* _Library;
};

#endif
