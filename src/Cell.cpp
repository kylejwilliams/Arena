
#include "Cell.h"

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Cell::Cell()
{
    Cell::state = room;
    Cell::symbol = "|";
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
State Cell::getState()
{
    return Cell::state;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Cell::getSymbol()
{
    return Cell::symbol;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  *
  */
 void Cell::setState(State state)
 {
    Cell::state = state;

    if (state == horizontalWall)
        Cell::symbol = "_";
    else if (state == verticalWall)
        Cell::symbol = "|";
    else
        Cell::symbol = " ";
 }

/** @brief (one liner)
  *
  * (documentation goes here)
  */
vector<Cell> Cell::getNeighbors()
{
    return neighbors;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Cell::addNeighbor(Cell cell)
{
    neighbors.push_back(cell);
}

