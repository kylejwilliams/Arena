#include "Maze.h"

Maze::Maze(int width, int height)
{
    //ctor
    Maze::height = height;
    Maze::width = width;

    srand(time(NULL));

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

//vector< vector<Cell> > Maze::getGrid()
//{
//    return Maze::grid;
//}


