#include "Utility.h"
#include <iostream>

string getInput()
{
    string i;
    cin >> i;
    return i;
}

void clearConsole()
{
    cout << "\x1B[2J\x1B[H";
}
