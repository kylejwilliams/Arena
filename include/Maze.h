#ifndef MAZE_H
#define MAZE_H

#include "Cell.h"

class Maze
{
    public:
        Maze(int w, int h);
        int getWidth();
        void setWidth(int width);
        int getHeight();
        void setHeight(int height);
    protected:
    private:
        int width;
        int height;
};

#endif // MAZE_H
