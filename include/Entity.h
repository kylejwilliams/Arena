#ifndef ENTITY_H
#define ENTITY_H

#include <string>
using namespace std;

class Entity
{
    public:
        Entity();
        void setName(string name);
        string getName();
    protected:
    private:
        string name;
};

#endif // ENTITY_H
