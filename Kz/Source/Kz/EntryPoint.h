#pragma once


#ifdef KZ_PLATFORM_WINDOWS

extern Kz::Application* Kz::CreateApplication();

int main(int argc, char** argv)
{
	Kz::Log::Init();
	KZ_CORE_WARN("Initialized Log!");
	KZ_INFO("Initialized Log!");
	auto App = Kz::CreateApplication();
	App->Run();
	delete App;
}
#else
	#error Kz Only support Windows!
#endif