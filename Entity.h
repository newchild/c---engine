#ifndef ENTITY_H
#define ENTITY_H
#include <string>
using std::string;
class Entity
{
    public:
        Entity(string name,float damage,float defense,float health);
        void getInfo();
        string Name;
        float Damage;
        float Defense;
        float Health;
        bool deathstate;
        float xp;
        int Level;
        float maxHealth;
    protected:
    private:
};

#endif // ENTITY_H
