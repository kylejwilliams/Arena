#include "Buffer.h"

Buffer::Buffer(unsigned int bw)
{
    Buffer::buffer = "";
    Buffer::bufferWidth = bw;
}

void Buffer::append(string txt)
{
    Buffer::buffer += txt;
}

void Buffer::display(string txt, bool isWrapped)
{
    if (isWrapped == true)
        cout << wordWrap(txt, getBufferWidth());
    else
        cout << txt;
}

void Buffer::display(int txt)
{
    string tmp = numberToString(txt);
    display(tmp);
}

void Buffer::display()
{
    display(buffer);
}

void Buffer::clearBuffer()
{
    buffer = "";
}

string Buffer::getBuffer()
{
    return buffer;
}

void Buffer::setBuffer(string txt)
{
    buffer = txt;
}

void Buffer::setBufferWidth(int bw)
{
    bufferWidth = bw;
}

int Buffer::getBufferWidth()
{
    return bufferWidth;
}

string Buffer::wordWrap(string text, int bufferWidth)
{
    size_t curWidth = bufferWidth;

    while (curWidth < text.length())
    {
        size_t spacePos = text.rfind(' ', curWidth);

        if (spacePos == string::npos)
            spacePos = text.find(' ', curWidth);
        else
        {
            text[spacePos] = '\n';
            curWidth = spacePos + bufferWidth + 1;
        }
    }

    return text;
}
