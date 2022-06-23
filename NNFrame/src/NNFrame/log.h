#pragma once

#include <memory>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
namespace NNFrame {
	class Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define CORE_TRACE(...)   ::NNFrame::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CORE_ERROR(...)   ::NNFrame::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CORE_WARN(...)    ::NNFrame::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CORE_INFO(...)    ::NNFrame::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CORE_FATAL(...)   ::NNFrame::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define NF_TRACE(...)     ::NNFrame::Log::GetClientLogger()->trace(__VA_ARGS__)
#define NF_ERROR(...)     ::NNFrame::Log::GetClientLogger()->error(__VA_ARGS__)
#define NF_WARN(...)      ::NNFrame::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NF_INFO(...)      ::NNFrame::Log::GetClientLogger()->info(__VA_ARGS__)
#define NF_FATAL(...)     ::NNFrame::Log::GetClientLogger()->fatal(__VA_ARGS__)

