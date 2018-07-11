#pragma once
#include "InputHandler.h"
#include <string>
#include <vector>

class Actions;

class Actor
{
public:
	Actor(std::string name, int x, int y);
	~Actor();

	void moveTo(int x, int y);
	void moveAround(int x, int y);
	void handleInput();

	int getX(){return m_xPos;}
	int getY(){return m_yPos;}

	std::string getName(){return m_name;}
	void printPos();
	void undoMoves();
private:
	int m_xPos;
	int m_yPos;
	std::string m_name;
	InputHandler m_inputHandler;
	std::vector<Command*> m_pastMoves;
};

