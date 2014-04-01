#include <string>
using std::string;

#include <Entity.h>
#include <iostream>

Entity::Entity(string name,float damage,float defense,float health)
{
        Name=name;
        Damage=damage;
        Defense=defense;
        Health=health;
        deathstate=false;
        xp=0;
        Level=1;
        maxHealth=health;
}



void Entity::getInfo(){
    std::cout << "Name: " << Name << " Health: " << Defense << " Defense: " << Defense << " Damage: " << Damage << " Dead? " << deathstate << "\n";
}
