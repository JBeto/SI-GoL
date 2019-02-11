#include "gameOfLife.hpp"
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>

// Randomizes the grid's initial state
GameOfLife::GameOfLife(size_t rows, size_t columns) {

}

// Calls update every x amount of seconds, based on the fps given
void GameOfLife::play(size_t fps) {
    // Example code
    std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Program stalls for 1 second
}

void GameOfLife::clearScreen() {
    std::cout << std::string(50, '\n');
}

// Determines if a cell is alive or dead based off game of life rules
bool GameOfLife::isAlive(size_t row, size_t column) //size_t is the longest unsigned
{
    bool isAlive = false;
    int numOfNeighborsAlive = 0;
    
    for(unsigned int i = 0; i < row; ++i)
    {
        for(unsigned int j = 0; j < column; ++j)
        {
            if(grid[i][j+1]) {
                ++numOfNeighborsAlive;
            }
        }
    }
    
    return isAlive;
}

// Updates the grid of cells to the next generation based off the game of life rules
void GameOfLife::update() {

}
