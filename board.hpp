#pragma once

#include "wall.hpp"
#include "pacman.hpp"
#include "ghost.hpp"
#include <vector>

class Board {
    int _width;
    int _height;
    std::vector<Wall> _walls;
    std::vector<Ghost> _ghosts;
public:
    Board(int width, int height);
    int GetWidth() const;
    int GetHeight() const;
    const std::vector<Wall>& GetWalls() const;
    const std::vector<Ghost>& GetGhosts() const;
};
