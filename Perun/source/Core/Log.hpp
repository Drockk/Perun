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

        static std::shared_ptr<spdlog::logger> getCoreLogger();
        static std::shared_ptr<spdlog::logger> getAppLogger();

    private:
        static inline std::shared_ptr<spdlog::logger> m_coreLogger{};
        static inline std::shared_ptr<spdlog::logger> m_appLogger{};
    };
}

// Core log macros
#define PN_CORE_DEBUG(...)    ::perun::Log::getCoreLogger()->trace(__VA_ARGS__)
#define PN_CORE_TRACE(...)    ::perun::Log::getCoreLogger()->trace(__VA_ARGS__)
#define PN_CORE_INFO(...)     ::perun::Log::getCoreLogger()->info(__VA_ARGS__)
#define PN_CORE_WARN(...)     ::perun::Log::getCoreLogger()->warn(__VA_ARGS__)
#define PN_CORE_ERROR(...)    ::perun::Log::getCoreLogger()->error(__VA_ARGS__)
#define PN_CORE_CRITICAL(...) ::perun::Log::getCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define PN_TRACE(...)         ::perun::Log::getAppLogger()->trace(__VA_ARGS__)
#define PN_TRACE(...)         ::perun::Log::getAppLogger()->trace(__VA_ARGS__)
#define PN_INFO(...)          ::perun::Log::getAppLogger()->info(__VA_ARGS__)
#define PN_WARN(...)          ::perun::Log::getAppLogger()->warn(__VA_ARGS__)
#define PN_ERROR(...)         ::perun::Log::getAppLogger()->error(__VA_ARGS__)
#define PN_CRITICAL(...)      ::perun::Log::getAppLogger()->critical(__VA_ARGS__)


#endif //PERUN_LOG_HPP
