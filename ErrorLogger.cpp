#include "ErrorLogger.h"
#include <comdef.h>

void ErrorLogger::Log(std::string message) 
{
	std::string e_message = "Error >> " + message;
	MessageBoxA(NULL, e_message.c_str(), "Error", MB_ICONERROR);
}

void ErrorLogger::Log(HRESULT hr, std::string message)
{
	_com_error error(hr);
	std::wstring e_message = L"Error >> " + StringConverter::StringToWide(message) + L"\n" + error.ErrorMessage();
	MessageBoxW(NULL, e_message.c_str(), L"Error", MB_ICONERROR);
}
