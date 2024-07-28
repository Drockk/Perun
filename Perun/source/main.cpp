#include <iostream>
#include "Core/Log.hpp"

int main() {
    perun::Log::init();
    perun::Log::getCoreLogger()->info("Hello World!");
    perun::Log::getAppLogger()->info("Hello World!");
    return 0;
}
