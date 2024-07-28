//
// Created by Bartosz Zielonka on 28.07.2024.
//

#ifndef PERUN_LOG_HPP
#define PERUN_LOG_HPP

#include <spdlog/spdlog.h>
#include <memory>

namespace perun {
    class Log {
    public:
        static void init();

        static std::shared_ptr<spdlog::logger> get_core_logger();
        static std::shared_ptr<spdlog::logger> get_app_logger();

    private:
        static inline std::shared_ptr<spdlog::logger> m_core_logger{};
        static inline std::shared_ptr<spdlog::logger> m_app_logger{};
    };
}

// Core log macros
#define PN_CORE_DEBUG(...)    ::perun::Log::get_core_logger()->trace(__VA_ARGS__)
#define PN_CORE_TRACE(...)    ::perun::Log::get_core_logger()->trace(__VA_ARGS__)
#define PN_CORE_INFO(...)     ::perun::Log::get_core_logger()->info(__VA_ARGS__)
#define PN_CORE_WARN(...)     ::perun::Log::get_core_logger()->warn(__VA_ARGS__)
#define PN_CORE_ERROR(...)    ::perun::Log::get_core_logger()->error(__VA_ARGS__)
#define PN_CORE_CRITICAL(...) ::perun::Log::get_core_logger()->critical(__VA_ARGS__)

// Client log macros
#define PN_TRACE(...)         ::perun::Log::get_app_logger()->trace(__VA_ARGS__)
#define PN_TRACE(...)         ::perun::Log::get_app_logger()->trace(__VA_ARGS__)
#define PN_INFO(...)          ::perun::Log::get_app_logger()->info(__VA_ARGS__)
#define PN_WARN(...)          ::perun::Log::get_app_logger()->warn(__VA_ARGS__)
#define PN_ERROR(...)         ::perun::Log::get_app_logger()->error(__VA_ARGS__)
#define PN_CRITICAL(...)      ::perun::Log::get_app_logger()->critical(__VA_ARGS__)


#endif //PERUN_LOG_HPP
