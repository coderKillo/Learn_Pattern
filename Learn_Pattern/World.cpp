#include "World.h"

World::World()
{
	creatActor("Player", 0, 0);
}

void World::creatActor(std::string name, int x, int y)
{
	Actors.push_back(new Actor(name, x, y));
}

Actor* World::getActor(int num)
{
	return Actors.at(num);
}

int World::getActorSize()
{
	return Actors.size();
}

void World::moveActor()
{
	for (auto& actor : Actors)
	{
		actor->handleInput();
	}
}