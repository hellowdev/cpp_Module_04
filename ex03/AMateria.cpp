#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria(){}


AMateria::AMateria(std::string const & type) : type(type){}

AMateria::AMateria(const AMateria& original)
{
    type = original.type;
}

AMateria& AMateria::operator=(const AMateria& original)
{
    type = original.type;
    return (*this);
}

void AMateria::use(ICharacter& target)
{
    if (getType() == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
    else if (getType() == "cure")
        std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

std::string const &AMateria::getType() const
{
    return (type);
}

AMateria::~AMateria(){}
