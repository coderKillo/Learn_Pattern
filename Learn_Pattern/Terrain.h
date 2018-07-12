#pragma once
#include <string>

class Terrain
{
public:
    Terrain(int movementCost,
        bool isWater,
        std::string texture)
        : m_movementCost(movementCost),
        m_isWater(isWater),
        m_texture(texture)
    {}

    int getMovementCost() const { return m_movementCost; }
    bool isWater() const { return m_isWater; }
    const std::string& getTexture() const { return m_texture; }

private:
    int m_movementCost;
    bool m_isWater;
    std::string m_texture;
};

