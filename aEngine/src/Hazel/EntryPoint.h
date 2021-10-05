#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
	//SandBox* sandbox = new SandBox();
	//sandbox->Run();
	//delete sandbox;

}

#endif // HA_PLATFORM_WINDOWS
