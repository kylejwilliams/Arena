#ifndef BUFFER_H
#define BUFFER_H

#include "Utility.h"

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Buffer
{
    public:
        Buffer(unsigned int bw);
        void append(string text);
        void display();
        void display(string text, bool isWrapped = true);
        void display(int text);
        void clearBuffer();
        string getBuffer();
        void setBuffer(string text);
        void setBufferWidth(int bw);
        int getBufferWidth();
        string wordWrap(string text, int bufferWidth);
    protected:
    private:
        string buffer;              // holds text waiting to be displayed to the console
        unsigned int bufferWidth;   // number of colums within the console
};

#endif // BUFFER_H
