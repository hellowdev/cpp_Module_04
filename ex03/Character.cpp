#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
}

Character::Character(std::string name) : charName(name)
{
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
}

// ---------------COPY CONSTRUCTOR--------------
Character::Character(const Character& original)
{
    charName = original.charName;
    for (int i = 0; i < 4; i++)
    {
        if (original.slots[i])
            slots[i] = original.slots[i]->clone();  // new original.slots[i]->getType()
        else
            slots[i] = NULL;
    }
}
// ---------------COPY ASSIGNEMENT--------------
Character& Character::operator=(const Character& original)
{
    if (this != &original)
    {
        Character::deleteSlots();
        charName = original.charName;
        for (int i = 0; i < 4; i++)
        {
            if (original.slots[i])
                this->slots[i] = original.slots[i]->clone();  // new original.slots[i]->getType()
            else
                this->slots[i] = NULL;
        }
    }
    return (*this);
}


std::string const& Character::getName() const
{
    return (charName);
}

void Character::equip(AMateria* m)
{
    if (!m) // if m NULL
        return ;
    // p-> can point to ice or cure depend on m
    for (int i = 0; i < 4; i++)
    {
        if (!slots[i])
        {
            slots[i] = m->clone();
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && slots[idx])
        slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && slots[idx])
    {
        slots[idx]->use(target); // call the specific obj from the ice or cure
    }
}

void Character::deleteSlots()
{
    for (int i = 0; i < 4; i++)
        delete slots[i];
}

Character::~Character()
{
    Character::deleteSlots();
}
