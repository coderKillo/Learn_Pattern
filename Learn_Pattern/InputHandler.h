#pragma once
class Actor;
class Command;
class Actions;
extern const char key;

class InputHandler
{
public:
	InputHandler(Actor *actor);
	Command* handleInput();
	void mapKeys(
		char up = 'W',
		char down = 'S',
		char right = 'A',
		char left = 'D');
private:
	const char UP_KEY = 'W';
	const char DOWN_KEY = 'S';
	const char LEFT_KEY = 'A';
	const char RIGHT_KEY = 'D';
	Actor* m_Actor = nullptr;
};


