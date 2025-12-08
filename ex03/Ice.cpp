#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice::Ice(const Ice& original) : AMateria(original){} // we should call the base copy first

Ice& Ice::operator=(const Ice& original)
{
    AMateria::operator=(original);
    return (*this);
}

AMateria* Ice::clone() const
{
    Ice *obj = new Ice;
    return (obj);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice()
{}
