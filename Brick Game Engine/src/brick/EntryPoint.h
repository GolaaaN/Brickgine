#pragma once



#ifdef BRICK_PLATFORM_WINDOWS

extern brick::Application* brick::CreateApplication();

    int main(int argc, char** argv) 
    {
        brick::Log::Init();
        
        auto app = brick::CreateApplication();
        app->run();
        delete app;
    }
#endif
