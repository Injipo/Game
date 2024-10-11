#pragma once

#include "point.hpp"
#include "direction.hpp"

class Ghost {
    Point _position;
public:
    Ghost(const Point& start_position);
    Point GetPosition() const;
    void Move(Direction direction);
};