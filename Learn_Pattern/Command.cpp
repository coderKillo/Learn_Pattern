#include "Command.h"
#include "Actor.h"
#include "stdafx.h"

void UpCommand::execute(Actor *actor) { actor->moveAround(1, 0); };

void DownCommand::execute(Actor *actor) { actor->moveAround(-1, 0); };

void LeftCommand::execute(Actor *actor) { actor->moveAround(1, 0); };

void RightCommand::execute(Actor *actor) { actor->moveAround(1, 0); };