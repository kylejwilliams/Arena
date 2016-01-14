#ifndef CELL_H
#define CELL_H

#include <string>
#include <vector>
using namespace std;

enum State
{
    horizontalWall,
    verticalWall,
    room
};

class Cell
{
    public:
        Cell();
        string getSymbol();
        enum State getState();
        void setState(State state);
        void addNeighbor(Cell cell);
        vector<Cell> getNeighbors();
    protected:
    private:
        string symbol;
        State state;
        vector<Cell> neighbors;
};

#endif // CELL_H
