#pragma once
#include "WindowContainer.h"

class Engine : WindowContainer
{
public:
	bool Initialize(HINSTANCE hInstance, std::string w_title, std::string w_class, int width, int height);
	bool ProcessMessages();
};

