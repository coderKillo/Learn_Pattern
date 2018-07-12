#pragma once

#include <vector>

class Terrain;

class Map
{
public:
    Map(int height, int width);
private:
    std::vector<Terrain*> m_terrain;
    const int m_width;
    const int m_height;
    Terrain m_grassTerrain;
    Terrain m_hillTerrain;
    Terrain m_riverTerrain;
};

