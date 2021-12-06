#pragma once

#include "Core.h"

namespace brick {

	class BRICK_API Application
	{
	public:
		void run();
	};

	//To be defined in the client
	Application* CreateApplication();

}