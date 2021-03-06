#include <iostream>
#include <time.h>

#include <SDL2/SDL.h>
#include "Logger.h"

#define WIDTH 600
#define HEIGHT 800

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *window = SDL_CreateWindow("Hello SDL World", 0, 50, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

    // Check that the window was successfully created
    if ( NULL == window )
    {
        // In the case that the window could not be made...
        logError(string("Could not create window: ") + string(SDL_GetError()));
        return 1;
    }
    
    SDL_Event windowEvent;
    
    while ( true )
    {
        if ( SDL_PollEvent( &windowEvent ) )
        {
            if ( SDL_QUIT == windowEvent.type )
            {
                
                break;
            }
        }
    }
    
    SDL_DestroyWindow( window );
    SDL_Quit( );
    
    return EXIT_SUCCESS;

    // Class* c = new Class();
    // c->print_num(10);
    // delete c;
}