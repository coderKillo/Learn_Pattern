#pragma once

class DownCommand;
class UpCommand;
class RightCommand;
class LeftCommand;


class Actions
{
public:
	Actions();
	~Actions();

	DownCommand * getDown();
	UpCommand* getUp();
	RightCommand* getRight();
	LeftCommand* getLeft();

private:
	DownCommand * m_downCommand = nullptr;
	UpCommand* m_upCommand = nullptr;
	RightCommand* m_rightCommand = nullptr;
	LeftCommand* m_leftCommand = nullptr;
};

