#ifndef CELL_H
#define CELL_H

#include <string>
using namespace std;

enum State {
    blank,
    floor,
    wall,
    border
};


class Cell
{
    public:
        Cell();
        enum State getState();
        void setState(enum State state);
        string getSymbol();
        void setSymbol(string s);
    protected:
    private:
        string symbol;
        State state;
};

#endif // CELL_H
