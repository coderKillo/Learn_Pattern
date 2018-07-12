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
		char up = 'w',
		char down = 's',
		char right = 'a',
		char left = 'd');
private:
	const char UP_KEY = 'w';
	const char DOWN_KEY = 's';
	const char LEFT_KEY = 'a';
	const char RIGHT_KEY = 'd';
	Actor* m_Actor = nullptr;
};


