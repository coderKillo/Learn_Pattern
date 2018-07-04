#pragma once
#include "InputHandler.h"
#include <string>

class Actor
{
public:
	Actor(std::string name, int x, int y);

	void moveTo(int x, int y);
	void moveAround(int x, int y);
	void handleInput();

	int getX(){return m_xPos;}
	int getY(){return m_yPos;}

	std::string getName(){return m_name;}
private:
	int m_xPos;
	int m_yPos;
	std::string m_name;
	InputHandler m_inputHandler;
};

Actor::Actor(std::string name, int x = 0, int y = 0)
	:m_name(name),
	m_xPos(x),
	m_yPos(y),
	m_inputHandler(this)
{
}

void Actor::moveTo(int x, int y)
{
	m_xPos = x;
	m_yPos = y;
}

void Actor::moveAround(int x, int y)
{
	m_xPos += x;
	m_yPos += y;
}

void Actor::handleInput()
{
	m_inputHandler.handleInput();
}