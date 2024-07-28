//
// Created by Bartosz Zielonka on 28.07.2024.
//

#include "Application.hpp"
#include "Log.hpp"

namespace perun {
    void Application::init() {
        PN_CORE_INFO("Initialize app: {}", m_app_name);
    }

    void Application::shutdown() {
        PN_CORE_INFO("Shutdown app: {}", m_app_name);
    }

    void Application::run() {

    }
} // perun