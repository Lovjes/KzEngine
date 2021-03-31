#pragma once

#ifdef KZ_PLATFORM_WINDOWS

extern Kz::Application* Kz::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hello Kz Engine!");
	auto App = Kz::CreateApplication();
	App->Run();
	delete App;
}
#else
	#error Kz Only support Windows!
#endif