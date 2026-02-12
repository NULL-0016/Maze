#include "StringConverter.h"

std::wstring StringConverter::StringToWide(std::string& str) {
	std::wstring wstr = std::wstring(str.begin(), str.end());
	return wstr;
}
