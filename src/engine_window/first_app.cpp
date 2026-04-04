#include "first_app.hpp"

namespace sapphire_engine {
    void FirstApp::run() {
        while (!engineWindow.shouldClose()) {
            glfwPollEvents();
        }
    }
} // namespace sapphire_engine