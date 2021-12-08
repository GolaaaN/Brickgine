#include "Log.h"

namespace brick {
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init() 
	{
		//general init
		spdlog::set_pattern("%^[%T] %n: %v%$");
		//Core init
		s_CoreLogger = spdlog::stderr_color_mt("Brick");
		s_CoreLogger->set_level(spdlog::level::trace);
		//client init
		s_ClientLogger = spdlog::stderr_color_mt("App");
		s_ClientLogger->set_level(spdlog::level::trace);
	}

	
}