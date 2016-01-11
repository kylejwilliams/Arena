#include "Player.h"
#include "Utility.h"
#include "Buffer.h"
#include "Maze.h"

using namespace std;

const int MAZE_WIDTH = 17;
const int MAZE_HEIGHT = 20;

int main()
{
    Player player;
    Buffer buffer(79);
    Maze maze(MAZE_WIDTH, MAZE_HEIGHT);

    maze.generateMaze();
    buffer.displayMaze(maze);

}
