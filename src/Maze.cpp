#include "Maze.h"

Maze::Maze(int width, int height)
{
    //ctor
    Maze::height = height;
    Maze::width = width;

    Cell grid[width][height];

    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            grid[x][y].setState(blank);
        }
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
