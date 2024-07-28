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


#endif //PERUN_LOG_HPP
