// c++ version of a demonstration file to get SDL
// working in c++, in an effort to blit images to the
// screen for a (non-hardware accelerated) 3D engine.  

#include <SDL.h>
#include <stdio.h>

// Screen dimension constants

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main (int argc, char* args[])
{
  SDL_Window* window = NULL;

  SDL_Surface* screenSurface = NULL;

  if( SDL_Init( SDL_INIT_VIDEO) < 0 )
    {

    printf( "SDL could not initialise! SDL_Error: %s\n", SDL_GetError() );

    }

  else
    {
      //This pointer is now pointing to this thing
      window = SDL_CreateWindow( "SDL Tutorial",
				 SDL_WINDOWPOS_UNDEFINED,
				 SDL_WINDOWPOS_UNDEFINED,
				 SCREEN_WIDTH,
				 SCREEN_HEIGHT,
				 SDL_WINDOW_SHOWN );

      if ( window == NULL ) //It is still not pointing to a memory location
	{
	  printf("Window could not be created! SDL_Error: %s\n", SDL_GetError() );
	}

      else
	{
	  screenSurface = SDL_GetWindowSurface( window );

	  SDL_FillRect( screenSurface, NULL, SDL_MapRGB (screenSurface->format,
							 0xFF, 0xED, 0xFF ) );

	  SDL_UpdateWindowSurface( window );

	  SDL_Delay(2000);
	}
    }
  
      

  SDL_DestroyWindow(window);

  SDL_Quit();

  return 0;
	
    
}

	

     
    




      
  
