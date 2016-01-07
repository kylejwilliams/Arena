#include "Maze.h"

Maze::Maze(int width, int height)
{
    //ctor
    Maze::height = height;
    Maze::width = width;

    // initialize the grid such that it has a border of walls
    Maze::grid.resize(height);
    for (int i = 0; i < height; ++i)
        Maze::grid[i].resize(width);
    for (int y = 0; y < height; y++)
    {
//        for (int x = 0; x < height; x++)
//        {
//            if (y == 0 || y == height - 1 || x == 0 || x == height - 1)
//                Maze::grid[y][x].setState(wall);
//            else
//                Maze::grid[y][x].setState(blank);
//        }
    }
}

int Maze::getWidth()
{
    return Maze::width;
}

void Maze::setWidth(int width)
{
    Maze::width = width;
}

int Maze::getHeight()
{
    return Maze::height;
}

void Maze::setHeight(int height)
{
    Maze::height = height;
}

vector< vector<Cell> > Maze::getGrid()
{
    return Maze::grid;
}
