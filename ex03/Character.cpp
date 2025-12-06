#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
}

Character::Character(const Character& original)
{
    AMateria *ice = new Ice;
    // AMateria *cure = new Cure;
    charName = original.charName;
    for (int i = 0; i < 4; i++)
    {
        if (original.slots[i] && original.slots[i]->getType() == "ice")
            this->slots[i] = ice;
        // else if (original.slots[i]->getType() == "cure")
        //     this->slots[i] = cure;
        else
            this->slots[i] = NULL;
            
    }
}

Character& Character::operator=(const Character& original)
{

    charName = original.charName;
    if (this->slots != original.slots)
    {
        Character::deleteSlots();
        AMateria *ice = new Ice;
    // AMateria *cure = new Cure;
        for (int i = 0; i < 4; i++)
        {
        if (original.slots[i] && original.slots[i]->getType() == "ice")
            this->slots[i] = ice;
        // else if (original.slots[i] && original.slots[i]->getType() == "cure")
        //     this->slots[i] = cure;
        else
            this->slots[i] = NULL;
        }
    }
    return (*this);
}

Character::Character(std::string name) : charName(name)
{
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
}

std::string const& Character::getName() const
{
    return (charName);
}

void Character::equip(AMateria* m)
{
    if (!m) // if m NULL
        return ;
    AMateria *p = m->clone(); // p-> can point to ice or cure depend on m // 0x200
    for (int i = 0; i < 4; i++)
    {
        if (!slots[i])
        {
            slots[i] = p; //0x200
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && !slots[idx])
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
    std::cout << "destructor character called\n";
    Character::deleteSlots();
    
}
