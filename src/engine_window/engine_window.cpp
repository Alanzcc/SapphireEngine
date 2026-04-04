#include "engine_window.hpp"

namespace sapphire_engine {
    EngineWindow::EngineWindow(int width, int height, std::string title) : width(width), height(height), title(title) {
        initWindow();
    }

    EngineWindow::~EngineWindow() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void EngineWindow::initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
        window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
    }
}