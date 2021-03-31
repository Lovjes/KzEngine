#include "Kz.h"


class SandBox : public Kz::Application
{
public:
	SandBox(){}
	~SandBox(){}

};

Kz::Application* Kz::CreateApplication()
{
	return new SandBox();
}