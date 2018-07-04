#pragma once
class World;

class Renderer
{
public:
	Renderer(World *world);
	void startRender();
	World* m_world;
};