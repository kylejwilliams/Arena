#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include <sstream>
using namespace std;

string getInput();
void clearConsole();

template <typename T>
string numberToString(T number)
{
    stringstream ss;
    ss << number;
    return ss.str();
}

template <typename T>
T stringToNumber(const string &text)
{
    stringstream ss(text);
    T result;
    return ss >> result ? result : 0;
}

#endif // UTILITY_H
