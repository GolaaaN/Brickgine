#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace brick {
	class BRICK_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {
			return s_CoreLogger;
		}
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {
			return s_ClientLogger;
		}
	};
}

//macros for the core logger
#define BRICK_CORE_ERROR(...) ::brick::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BRICK_CORE_WARN(...) ::brick::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BRICK_CORE_INFO(...) ::brick::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BRICK_CORE_TRACE(...) ::brick::Log::GetCoreLogger()->trace(__VA_ARGS__)
//macros for the client logger
#define BRICK_CLIENT_ERROR(...) ::brick::Log::GetClientLogger()->error(__VA_ARGS__)
#define BRICK_CLIENT_WARN(...) ::brick::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BRICK_CLIENT_INFO(...) ::brick::Log::GetClientLogger()->info(__VA_ARGS__)
#define BRICK_CLIENT_TRACE(...) ::brick::Log::GetClientLogger()->trace(__VA_ARGS__)



