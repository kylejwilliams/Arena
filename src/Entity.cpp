#include "Entity.h"

Entity::Entity()
{
    //ctor
}

void Entity::setName(string name)
{
    Entity::name = name;
}

string Entity::getName()
{
    return name;
}
