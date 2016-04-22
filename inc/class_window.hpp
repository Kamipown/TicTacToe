#pragma once

#include "tictactoe.hpp"

class class_window
{
private:
	SDL_Window	*window;

public:
	class_window(void);
	~class_window(void);

	void	resize(int w, int h);
	void	fullscreen(bool f);
};
