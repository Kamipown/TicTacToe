#include "class_engine.hpp"

class_engine::class_engine(void)
{
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS);

	this->window = new class_window();
	this->events = new class_events();

	this->run = true;

	this->events->init(this->inputs);
}

class_engine::~class_engine(void)
{
	delete this->window;
	delete this->events;
	SDL_Quit();
}

void class_engine::loop(void)
{
	while (this->run)
	{
		this->events->update(this->inputs);

		if (this->inputs.escape)
			this->run = false;
	}
}
