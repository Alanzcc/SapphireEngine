// std
#include <cstdlib>
#include <iostream>
#include <stdexcept>

// libs
//#include <vulkan/vulkan.h>

// local
#include "engine_window/first_app.hpp"

int main() {
    sapphire_engine::FirstApp app{};

    try {
        app.run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}