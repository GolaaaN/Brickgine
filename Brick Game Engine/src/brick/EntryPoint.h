#pragma once



#ifdef BRICK_PLATFORM_WINDOWS

//why we have to declere it here
extern brick::Application* brick::CreateApplication();

    int main(int argc, char** argv) 
    {
        brick::Log::Init();
        
        auto app = brick::CreateApplication();
        app->run();
        delete app;
    }
#endif
