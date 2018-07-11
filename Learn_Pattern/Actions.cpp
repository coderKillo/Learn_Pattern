#include "Actions.h"
#include "Command.h"



Actions::Actions()
{
	m_downCommand = new DownCommand;
	m_upCommand = new UpCommand;
	m_rightCommand = new RightCommand;
	m_leftCommand = new LeftCommand;
}


Actions::~Actions()
{
	delete m_downCommand;
	delete m_upCommand;
	delete m_rightCommand;
	delete m_leftCommand;
}

DownCommand * Actions::getDown()
{
	return m_downCommand;
}

UpCommand* Actions::getUp()
{
	return m_upCommand;
}

RightCommand* Actions::getRight()
{
	return m_rightCommand;
}

LeftCommand* Actions::getLeft()
{
	return m_leftCommand;
}
