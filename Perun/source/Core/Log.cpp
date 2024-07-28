//
// Created by Bartosz Zielonka on 28.07.2024.
//

#include "Log.hpp"

#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>

void perun::Log::init() {
    auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
    console_sink->set_level(spdlog::level::info);
    console_sink->set_pattern("[%H:%M:%S.%e] [%n] [%^%l%$] [%t] %v");

    auto file_sink = std::make_shared<spdlog::sinks::basic_file_sink_mt>("perun.log", true);
    file_sink->set_level(spdlog::level::debug);
    file_sink->set_pattern("[%H:%M:%S.%e] [%n] [%^%l%$] [%t] %v");

    m_coreLogger = std::make_shared<spdlog::logger>(spdlog::logger{"CORE", {console_sink, file_sink}});
    m_appLogger = std::make_shared<spdlog::logger>(spdlog::logger{"APP", {console_sink, file_sink}});
}

std::shared_ptr<spdlog::logger> perun::Log::getCoreLogger() {
    return m_coreLogger;
}

std::shared_ptr<spdlog::logger> perun::Log::getAppLogger() {
    return m_appLogger;
}
