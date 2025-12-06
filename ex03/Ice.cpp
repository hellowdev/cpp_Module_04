#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice::Ice(const Ice& original)
{
    this->type = original.type; 
}

AMateria* Ice::clone() const
{
    Ice *obj = new Ice;
    return (obj);
}

// Ice::Ice(const Ice& original)
// {

// }

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice()
{}

