#include "Player.h"
#include "Utility.h"
#include "Buffer.h"
#include "Maze.h"

using namespace std;

int main()
{
    Player player;
    Buffer buffer(79);
    Maze maze(50, 20);

    buffer.displayMaze(maze);
}
