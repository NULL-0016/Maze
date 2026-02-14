#include "Engine.h"

bool Engine::Initialize(HINSTANCE hInstance, std::string w_title, std::string w_class, int width, int height)
{
	return this->render_window.Initialize(this, hInstance, w_title, w_class, width, height);
}

bool Engine::ProcessMessages()
{
	return this->render_window.ProcessMessages();
}
