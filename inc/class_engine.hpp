#pragma once

#include "tictactoe.hpp"
#include "class_window.hpp"
#include "class_events.hpp"

class class_engine
{
private:
	class_window	*window;
	class_events	*events;

	bool 			run;
	s_inputs		inputs;

public:
	class_engine(void);
	~class_engine(void);

	void	loop(void);
};
