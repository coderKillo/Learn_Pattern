#pragma once
class Actor;

class Command
{
	
public:
	virtual ~Command() {}
	virtual void execute(Actor *actor) = 0;
	virtual void undon(Actor *actor) = 0;
};

class UpCommand : public Command
{
	virtual void execute(Actor *actor);
	virtual void undon(Actor *actor);
};

class DownCommand : public Command
{
	virtual void execute(Actor *actor);
	virtual void undon(Actor *actor);
};

class LeftCommand : public Command
{
	virtual void execute(Actor *actor);
	virtual void undon(Actor *actor);
};

class RightCommand : public Command
{
	virtual void execute(Actor *actor);
	virtual void undon(Actor *actor);
};

class UndoCommand : public Command
{
    virtual void execute(Actor *actor);
    virtual void undon(Actor *actor);
};