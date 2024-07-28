#include "Core/Application.hpp"
#include "Core/Log.hpp"

#include <stdexcept>
#include <iostream>

int main() {
    perun::Log::init();

    try {
        auto app = perun::Application("Perun");
        app.init();
        app.run();
        app.shutdown();
    }
    catch (const std::exception& exception) {
        std::cerr << exception.what();
    }
    return 0;
}
