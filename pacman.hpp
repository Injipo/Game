#pragma once

#include "point.hpp"
#include "direction.hpp"

class Pacman {
    Point _position;
    int _lives;
public:
    Pacman(const Point& start_position, int lives = 3);
    Point GetPosition() const;
    void Move(Direction direction);
    int GetLives() const;
    void LoseLife();
};
