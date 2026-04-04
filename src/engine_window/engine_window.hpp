#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace sapphire_engine {

    class EngineWindow {
    private:
        void initWindow();
        GLFWwindow* window;
        const int width;
        const int height;
        const std::string title;
    public:
        EngineWindow(int width, int height, std::string title);
        ~EngineWindow();

        EngineWindow(const EngineWindow&) = delete;
        EngineWindow& operator=(const EngineWindow&) = delete;

        bool shouldClose() {
            return glfwWindowShouldClose(window);
        };
    };
}