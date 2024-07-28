#include "Core/Log.hpp"

int main() {
    perun::Log::init();

    PN_CORE_INFO("TEST");
    return 0;
}
