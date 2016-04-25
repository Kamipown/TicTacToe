#pragma once

#include "tictactoe.hpp"
#include "class_events.hpp"

class class_events
{
private:
	SDL_Event	event;

public:
	class_events(void);
	~class_events(void);

	void init(s_inputs &inputs);
	void update(s_inputs &inputs);
};
