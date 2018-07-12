#pragma once

#include "Actor.h"
#include <vector>
#include <memory>

class Map;

class World
{
public:
	World();
	void creatActor(std::string name, int x, int y);
	void moveActor();
	Actor* getActor(int index);
    size_t getActorCount();

private:
	std::vector<std::unique_ptr<Actor>> m_actors;
    Map m_map;
};


