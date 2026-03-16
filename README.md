# My FOOLISH attempt at developing a game engine in C++ Vulkan and solving some university tasks along the way

## MacOS Setup for Vulkan:
- Download and run XCode to download the needed toolchains
- Download Vulkan
- Go to the setup-env.sh file inside the VulkanSDK, copy it and add to your .zshrc changing the VULKANSDK variable path to your VulkanSDK path.
- run $ "source .zshrc"

### Helpful Link: https://vulkan.lunarg.com/doc/view/1.3.280.1/mac/getting_started.html

## MacOS setup for GLFW:
- run $ "brew install cmake glfw"


## To run the project run the command:
    meson setup . ./build && cd build && meson compile && ./SapphireEngine
# Now you can run Vulkan GLFW on MacOS command-line!!!
