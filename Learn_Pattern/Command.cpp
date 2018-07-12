#include "Command.h"
#include "Actor.h"

void UpCommand::execute(Actor *actor) 
{ 
	actor->moveAround(1, 0); 
};

void UpCommand::undon(Actor *actor)
{
	actor->moveAround(-1, 0);
}

void DownCommand::execute(Actor *actor) 
{ 
	actor->moveAround(-1, 0); 
};

void DownCommand::undon(Actor *actor)
{
	actor->moveAround(1, 0);
}

void LeftCommand::execute(Actor *actor) 
{ 
	actor->moveAround(0, -1); 
};

void LeftCommand::undon(Actor *actor)
{
	actor->moveAround(0, 1);
}

void RightCommand::execute(Actor *actor) 
{ 
	actor->moveAround(0, 1); 
};

void RightCommand::undon(Actor *actor)
{
	actor->moveAround(0, -1);
}


void UndoCommand::execute(Actor *actor)
{
    actor->undoMoves();
}
void UndoCommand::undon(Actor *actor)
{

}

