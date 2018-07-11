#pragma once

#include "Actor.h"
#include <vector>
#include <memory>

class Actions;

class World
{
public:
	World();
	void creatActor(std::string name, int x, int y);
	void moveActor();
	Actor* getActor(int index);
	int getActorCount();

private:
	std::vector<std::unique_ptr<Actor>> m_actors;
};


