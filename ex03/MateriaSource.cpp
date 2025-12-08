#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
}

// --------COPY CONSTRUCTOR----------

MateriaSource::MateriaSource(const MateriaSource& original )
{
    for (int i = 0; i < 4; i++)
    {
        if (original.slots[i])
            slots[i] = original.slots[i]->clone(); // deep copy
        else
            slots[i] = NULL; // we must set the rest of slots with null to avoid segv if we try to dereference
    }
    
}
MateriaSource& MateriaSource::operator=(const MateriaSource& original)
{
    if (this != &original) // a = a
    {
        for (int i = 0; i < 4; i++)
        {
            delete slots[i];
            if (original.slots[i])
                slots[i] = original.slots[i]->clone(); // deep copy
            else
                slots[i] = NULL;
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!slots[i])
        {
            slots[i] = m->clone();
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (slots[i] && slots[i]->getType() == type)
            return (slots[i]->clone());
    }
    return 0;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete slots[i];
}