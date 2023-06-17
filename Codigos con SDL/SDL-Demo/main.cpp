#include <SDL2/SDL.h>


int main(int argc, char *argv[]) {
    // Inicializar SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "No se pudo inicializar SDL: %s", SDL_GetError());
        
        return -1;
    }

    // Crear una ventana
    SDL_Window* window = SDL_CreateWindow("Mi ventana SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    if (!window) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "No se pudo crear la ventana: %s", SDL_GetError());
        return -1;
    }

    // Esperar hasta que se cierre la ventana
    bool quit = false;
    SDL_Event event;
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    // Liberar recursos y cerrar SDL
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
