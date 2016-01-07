#include "Player.h"
#include "Utility.h"
#include "Buffer.h"

using namespace std;

int main()
{
    Player player;
    Buffer buffer(79);

    for (int row = 1; row <= 20; row++)
    {
        if (row == 1 || row == 20)
        {
            buffer.setBuffer("##################################################");
        }
        else
        {
            buffer.setBuffer("#                                                #");
        }
        buffer.append("\n");
        buffer.display(buffer.getBuffer(), false);
        buffer.clearBuffer();
    }
    //clearConsole();
}
