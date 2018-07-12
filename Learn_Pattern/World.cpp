#include "World.h"
#include "Command.h"

World::World()
{
	creatActor("Player1", 0, 0);
}

void World::creatActor(std::string name, int x, int y)
{
	m_actors.push_back(std::make_unique<Actor>(name, x, y));
}

Actor* World::getActor(int num)
{
	return m_actors.at(num).get();
}

size_t World::getActorCount()
{
	return m_actors.size();
}

void World::moveActor()
{
	for (auto& actor : m_actors)
	{
		actor->handleInput();
	}
}