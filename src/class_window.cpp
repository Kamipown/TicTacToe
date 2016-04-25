#include "class_window.hpp"

using namespace std;

class_window::class_window(void)
{
	this->window = SDL_CreateWindow("TicTacToe", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_W, SCREEN_H, 0);
	if (!this->window)
	{
		cout << "Window creation failed : " << SDL_GetError() << endl;
		exit(EXIT_FAILURE);
	}
}

class_window::~class_window(void)
{
	SDL_DestroyWindow(this->window);
}

void class_window::resize(int w, int h)
{
	SDL_SetWindowSize(this->window, w, h);
}

void class_window::fullscreen(bool f)
{
	if (f)
		SDL_SetWindowFullscreen(this->window, SDL_WINDOW_FULLSCREEN_DESKTOP);
	else
		SDL_SetWindowFullscreen(this->window, 0);

}
