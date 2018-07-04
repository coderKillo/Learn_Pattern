#pragma once
class Actor;
class Command;


class InputHandler
{
public:
	InputHandler(Actor *actor);
	void handleInput();
private:
	char UP_KEY = 'W';
	char DOWN_KEY = 'S';
	char LEFT_KEY = 'A';
	char RIGHT_KEY = 'D';

	Command* ButtonUp;
	Command* ButtonDown;
	Command* ButtonRight;
	Command* ButtonLeft;

	Actor* m_Actor;
};


