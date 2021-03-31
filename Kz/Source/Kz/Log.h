#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Kz
{

	class KZ_API Log
	{
	public:

		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger()
		{
			return s_CoreLogger;
		}

		inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
		{
			return s_CoreLogger;
		}

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core Logger Macros
#define KZ_CORE_TRACE(...) ::Kz::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define KZ_CORE_INFO(...)  ::Kz::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KZ_CORE_WARN(...)  ::Kz::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KZ_CORE_ERROR(...) ::Kz::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KZ_CORE_FATAL(...) ::Kz::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Logger Macros
#define KZ_TRACE(...) ::Kz::Log::GetClientLogger()->trace(__VA_ARGS__)
#define KZ_INFO(...)  ::Kz::Log::GetClientLogger()->info(__VA_ARGS__)
#define KZ_WARN(...)  ::Kz::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KZ_ERROR(...) ::Kz::Log::GetClientLogger()->error(__VA_ARGS__)
#define KZ_FATAL(...) ::Kz::Log::GetClientLogger()->fatal(__VA_ARGS__)