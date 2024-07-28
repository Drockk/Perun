//
// Created by Bartosz Zielonka on 28.07.2024.
//

#ifndef PERUN_APPLICATION_HPP
#define PERUN_APPLICATION_HPP

#include <string>

namespace perun {

    class Application {
    public:
        explicit Application(std::string_view t_app_name): m_app_name(t_app_name) {};

        ~Application() = default;

        void init();

        void run();

        void shutdown();

    private:
        std::string m_app_name{};
    };

} // perun

#endif //PERUN_APPLICATION_HPP
