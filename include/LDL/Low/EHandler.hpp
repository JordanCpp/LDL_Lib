#ifndef LDL_Low_EHandler_hpp
#define LDL_Low_EHandler_hpp

#include <LDL/Low/String.hpp>

class LDL_LIBRARY LDL_ErrorHandler
{
public:
	LDL_ErrorHandler();
	~LDL_ErrorHandler();
	void Message(const char* message, const char* detail = "");
	const char* Message();
	bool Ok();
private:
	bool _IsOk;
	LDL_String _Message;
};

#endif
