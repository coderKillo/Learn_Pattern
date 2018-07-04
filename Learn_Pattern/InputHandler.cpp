#include "InputHandler.h"
#include "Command.h"
#include "Actor.h"
#include "stdafx.h"
#include <conio.h>

InputHandler::InputHandler(Actor *actor) :
	m_Actor(actor)
{

}

void InputHandler::handleInput()
{
	char key = getch();
	if (key == UP_KEY) ButtonUp->execute(m_Actor);
	else if (key == DOWN_KEY) ButtonDown->execute(m_Actor);
	else if (key == LEFT_KEY) ButtonLeft->execute(m_Actor);
	else if (key == RIGHT_KEY) ButtonRight->execute(m_Actor);
}