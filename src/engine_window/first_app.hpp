#pragma once
#include "engine_window.hpp"

namespace sapphire_engine {
    class FirstApp {
    private:
        EngineWindow engineWindow{ WIDTH, HEIGHT, "Sapphire Engine" };
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;
        void run();
    };
}