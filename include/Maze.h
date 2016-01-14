#ifndef MAZE_H
#define MAZE_H

#include <vector>
#include <ctime>
#include <cstdlib>
#include <iostream>

#include "Cell.h"

using namespace std;

class Maze
{
    public:
        Maze(int width, int height);
        int getWidth();
        void setWidth(int width);
        int getHeight();
        void setHeight(int height);
    protected:
    private:
        int width;
        int height;
        vector< vector<Cell> > grid;
};

#endif // MAZE_H
