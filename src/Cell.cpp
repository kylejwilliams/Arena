#include "Cell.h"

Cell::Cell()
{
    Cell::state = blank;
    Cell::symbol = ".";
}

void Cell::setState(State state)
{
    Cell::state = state;

    if (state == blank)
        Cell::symbol = " ";
    else if (state == floor)
        Cell::symbol = ".";
    else
        Cell::symbol = "#";

}

State Cell::getState()
{
    return Cell::state;
}

void Cell::setSymbol(string s)
{
    Cell::symbol = s;
}

string Cell::getSymbol()
{
    return Cell::symbol;
}