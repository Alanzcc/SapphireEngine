#include <iostream>
#include <print>
#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>

int main() {
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow* window = glfwCreateWindow(640, 480, "Window Title", NULL, NULL);
    //Get Extension Count
    ::uint32_t extensionCount{};
    ::vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

    //Debug Extensions
    std::println("Found {} extensions!", extensionCount);

    return 0;
}