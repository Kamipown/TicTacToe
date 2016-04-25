#include "class_events.hpp"

class_events::class_events(void)
{

}

class_events::~class_events(void)
{

}

void class_events::init(s_inputs &inputs)
{
	inputs.escape = false;
}

void class_events::update(s_inputs &inputs)
{
	while (SDL_PollEvent(&this->event))
	{
		if (this->event.key.keysym.sym == SDLK_ESCAPE)
			inputs.escape = true;
	}
}
