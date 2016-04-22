#include "class_engine.hpp"

using namespace std;

class_engine::class_engine(void)
{
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS);
}

class_engine::~class_engine(void)
{
	SDL_Quit();
}
