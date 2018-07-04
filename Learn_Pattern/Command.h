#pragma once
class Actor;

class Command
{
	
public:
	virtual ~Command() {}
	virtual void execute(Actor *actor) = 0;
};

class UpCommand : public Command
{
	virtual ~UpCommand() {}
	virtual void execute(Actor *actor);
};

class DownCommand : public Command
{
	virtual ~DownCommand() {}
	virtual void execute(Actor *actor);
};

class LeftCommand : public Command
{
	virtual ~LeftCommand() {}
	virtual void execute(Actor *actor);
};

class RightCommand : public Command
{
	virtual ~RightCommand() {}
	virtual void execute(Actor *actor);
};