#pragma once

#include "board.hpp"
#include "pacman.hpp"

class GameEngine {
    Board _board;
    Pacman _pacman;
public:
    GameEngine();
    void Init();
    void Run();
    bool CheckCollision(const Point& new_position);
    void MovePacman(Direction direction);
};