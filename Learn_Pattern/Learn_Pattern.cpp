#include "World.h"
#include "Renderer.h"

int main()
{
	//init
	World world;
	Renderer renderer(&world);
	//Game Loop
	while (true)
	{
		world.moveActor();
		renderer.startRender();
	}
    return 0;
}

