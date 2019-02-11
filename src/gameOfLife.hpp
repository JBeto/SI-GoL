#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

#include <cstdlib>

class GameOfLife {
    private:
        bool grid[1024][1024];
        size_t rows, columns;

    public:
        GameOfLife(size_t rows, size_t columns);
        void play(size_t fps);

    private:
        void clearScreen();
        bool isAlive(size_t row, size_t column);
        void update();
};

#endif
