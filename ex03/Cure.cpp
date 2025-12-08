#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure::Cure(const Cure& original) : AMateria(original){} // we should call the base copy first

Cure& Cure::operator=(const Cure& original)
{
    AMateria::operator=(original);
    return (*this);
}

AMateria* Cure::clone() const
{
    Cure *obj = new Cure;
    return (obj);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

Cure::~Cure()
{}