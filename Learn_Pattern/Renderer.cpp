#include "Renderer.h"
#include "World.h"
#include <iostream>
#include <string>

Renderer::Renderer(World *world)
	:m_world(world)
{
}

void Renderer::startRender()
{
	auto count = m_world->getActorCount();
	for (auto i = 0; i < count; i++)
	{
		Actor* actor = m_world->getActor(i);
		std::cout <<
			"Actor: " << actor->getName() <<
			"Move To: " << actor->getX() <<
			", " << actor->getY() << std::endl;
	}
}