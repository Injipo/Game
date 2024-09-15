#pragma once

#include "point.hpp"

class Wall {
    Point _position;
public:
    Wall(const Point& position);
    Point GetPosition() const;
};
