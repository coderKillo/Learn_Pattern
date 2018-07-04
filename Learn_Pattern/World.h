#pragma once

#include <vector>
#include "Actor.h"

class World
{
public:
	World();
	void creatActor(std::string name, int x, int y);
	void moveActor();
	Actor* getActor(int num);
	int getActorSize();

private:
	std::vector<Actor*> Actors;
};


