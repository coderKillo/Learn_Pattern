#include "Actor.h"
#include "Command.h"
#include <iostream>

Actor::Actor(std::string name, int x = 0, int y = 0)
	:m_name(name),
	m_xPos(x),
	m_yPos(y),
	m_inputHandler(this)
{

}
Actor::~Actor()
{
	for (auto& move : m_pastMoves)
	{
		delete move;
	}
}

void Actor::moveTo(int x, int y)
{
	m_xPos = x;
	m_yPos = y;
	printPos();
}

void Actor::moveAround(int x, int y)
{
	m_xPos += x;
	m_yPos += y;
	printPos();
}

void Actor::handleInput()
{
	auto command = m_inputHandler.handleInput();
	if (command)
	{
		command->execute(this);
		m_pastMoves.push_back(command);
	}
}

void Actor::undoMoves()
{
	for (auto& move : m_pastMoves) 
	{
		move->undon(this);
		delete move;
	}
	m_pastMoves.clear();
}

void Actor::printPos()
{
	std::cout << "Actor: " << m_name
		<< " to Position: " << m_xPos 
		<< "; " << m_yPos << std::endl;
}