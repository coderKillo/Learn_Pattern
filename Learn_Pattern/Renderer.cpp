#include "Renderer.h"
#include "World.h"
#include <iostream>
#include <string>
#include "stdafx.h"

Renderer::Renderer(World *world)
	:m_world(world)
{
}

void Renderer::startRender()
{
	int size = m_world->getActorSize();
	for (int i = 0; i < size; i++)
	{
		auto actor = m_world->getActor(i);
		std::cout <<
			"Actor: " << actor->getName() <<
			"Move To: " << actor->getX() <<
			", " << actor->getY() << std::endl;
	}
}