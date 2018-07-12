#include "stdafx.h"
#include "Map.h"
#include "Terrain.h"


Map::Map(int height, int width)
    : m_grassTerrain(1, false, "Grass")
    , m_hillTerrain(3, false, "Hill")
    , m_riverTerrain(2, true, "River")
    , m_width(width)
    , m_height(height)
{

}
