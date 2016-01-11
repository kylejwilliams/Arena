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
        if (y % 2 != 0)
            for (int x = 0; x < width; x++)
                Maze::grid[y][x].setState(wall);
        else
        {
            for (int x = 0; x < width; x++)
            {
                //if (y == 0 || y == height - 1 || x == 0 || x == width - 1)
                //    Maze::grid[y][x].setState(wall);
                if (x % 2 == 0)
                    Maze::grid[y][x].setState(wall);
                else
                    Maze::grid[y][x].setState(blank);
            }
        }

    }

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

vector< vector<Cell> > Maze::getGrid()
{
    return Maze::grid;
}

void Maze::generateMaze()
{
    int ycoord;
    int xcoord;
    int xCoordNeighbor;
    int yCoordNeighbor;

    enum Borders { Top, Right, Bottom, Left };
    Borders entrance;
    Borders exit;

    entrance = static_cast<Borders>(rand() % 4);
    exit = entrance;

    while (exit == entrance)
        exit = static_cast<Borders>(rand() % 4);

    switch (entrance)
    {
        case Top:
            ycoord = 0;
            xcoord = 1 + (rand() % (width - 1));

            xCoordNeighbor = xcoord;
            yCoordNeighbor = ycoord + 1;

            break;
        case Right:
            ycoord = 1 + (rand() % (height - 1));
            xcoord = Maze::getWidth() - 1;

            xCoordNeighbor = xcoord - 1;
            yCoordNeighbor = ycoord;

            break;
        case Bottom:
            ycoord = Maze::getHeight() - 1;
            xcoord = 1 + (rand() % (width - 1));

            xCoordNeighbor = xcoord;
            yCoordNeighbor = ycoord - 1;

            break;
        case Left:
            ycoord = 1 + (rand() % (height - 1));
            xcoord = 0;

            xCoordNeighbor = xcoord + 1;
            yCoordNeighbor = ycoord;

            break;
        default:
            break;
    }

    Maze::grid[ycoord][xcoord].setState(floor);
    Maze::grid[yCoordNeighbor][xCoordNeighbor].setState(floor);

    switch (exit)
    {
        case Top:
            ycoord = 0;
            xcoord = 1 + (rand() % (width - 1));

            xCoordNeighbor = xcoord;
            yCoordNeighbor = ycoord + 1;

            break;
        case Right:
            ycoord = 1 + (rand() % (height - 1));
            xcoord = Maze::getWidth() - 1;

            xCoordNeighbor = xcoord - 1;
            yCoordNeighbor = ycoord;

            break;
        case Bottom:
            ycoord = Maze::getHeight() - 1;
            xcoord = 1 + (rand() % (width - 1));

            xCoordNeighbor = xcoord;
            yCoordNeighbor = ycoord - 1;

            break;
        case Left:
            ycoord = 1 + (rand() % (height - 1));
            xcoord = 0;

            xCoordNeighbor = xcoord + 1;
            yCoordNeighbor = ycoord;

            break;
        default:
            break;
    }

    Maze::grid[ycoord][xcoord].setState(floor);
    Maze::grid[yCoordNeighbor][xCoordNeighbor].setState(floor);



}
