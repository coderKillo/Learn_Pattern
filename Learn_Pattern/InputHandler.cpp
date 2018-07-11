#include "InputHandler.h"
#include "Command.h"
#include "Actor.h"
#include "Actions.h"
#include <conio.h>

InputHandler::InputHandler(Actor *actor) :
	m_Actor(actor)
{

}

Command* InputHandler::handleInput()
{
	const char key = _getch();

	if (key == UP_KEY)
	{
		return new UpCommand();
	}
	else if (key == DOWN_KEY)
	{
		return new DownCommand();
	}
	else if (key == LEFT_KEY) 
	{
		return new LeftCommand();
	}
	else if (key == RIGHT_KEY) 
	{
		return new RightCommand();
	}
	else
	{
		return nullptr;
	}
}

void InputHandler::mapKeys(char up, char down, char right , char left)
{
	//TODO: map key
}