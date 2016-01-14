#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

#include "Cell.h"
using namespace std;

const int MAZE_WIDTH = 5;
const int MAZE_HEIGHT = 5;

int main()
{
    srand(time(0));
    // Need to get all the internal walls and not count the border walls
    int numWallsX = ((MAZE_WIDTH * 2) - 1);
    int numWalls = numWallsX * MAZE_HEIGHT;
    int numRooms = MAZE_WIDTH * MAZE_HEIGHT;

    vector< vector<Cell> > maze;
    maze.resize(MAZE_HEIGHT);
    for (int i = 0; i < MAZE_HEIGHT; i++)
        maze[i].resize(numWallsX);

    for (int y = 0; y < MAZE_HEIGHT; y++)
        for (int x = 0; x < numWallsX; x++)
            (x % 2 == 0) ? maze[y][x].setState(horizontalWall) : maze[y][x].setState(verticalWall);

    vector< vector<Cell> > roomSets;
    vector< vector<Cell> > wallSets;

    // skip the outer border walls
    for (int y = 0; y < MAZE_HEIGHT; y++)
    {
        for (int x; x < numWallsX; x++)
        {
            if (maze[y][x].getState() == horizontalWall)
            {
                if (y == 0)
                    maze[y][x].addNeighbor(maze[y + 1][x]);
                else if (y == MAZE_HEIGHT - 1)
                    maze[y][x].addNeighbor(maze[y - 1][x]);
                else
                {
                    maze[y][x].addNeighbor(maze[y - 1][x]);
                    maze[y][x].addNeighbor(maze[y + 1][x]);
                }
            }
            else if (maze[y][x].getState() == verticalWall)
            {
                if (x == 0)
                    maze[y][x].addNeighbor(maze[y][x + 1]);
                else if (x == numWallsX - 1)
                    maze[y][x].addNeighbor(maze[y][x - 1]);
                else
                {
                    maze[y][x].addNeighbor(maze[y][x - 1]);
                    maze[y][x].addNeighbor(maze[y][x + 1]);
                }
            }
        }
    }

    for (int y = 0; y < MAZE_HEIGHT; y++)
    {
        for (int x = 0; x < numWallsX; x++)
        {
            if (maze[y][x].getState() == horizontalWall)
            {
                vector<Cell> tmp;
                tmp.push_back(maze[y][x]);
                roomSets.push_back(tmp);
            }
        }
    }

    // print top of maze
    cout << " ";
    for (int i = 0; i < numWallsX; i++)
        cout << "_";
    cout << "\n";

    // print body of maze
    for (int y = 0; y < maze.size(); y++)
    {
        cout << "|"; // left wall of maze

        for (int x = 0; x < maze[y].size(); x++)
        {
            cout << maze[y][x].getSymbol();
        }

        cout << "|\n"; // right wall of maze
    }

}
