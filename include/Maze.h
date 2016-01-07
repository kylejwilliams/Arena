#ifndef MAZE_H
#define MAZE_H

#include <vector>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

#include "Cell.h"

class Maze
{
    public:
        Maze(int width, int height);
        int getWidth();
        void setWidth(int width);
        int getHeight();
        void setHeight(int height);
        vector< vector<Cell> > getGrid();
        void generateMaze();
    protected:
    private:
        int width;
        int height;
        vector< vector<Cell> > grid;
};

#endif // MAZE_H
