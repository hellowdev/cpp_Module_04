#include "Animal.hpp"

Animal::Animal() : type("Uknown")
{
    std::cout << "ANIMAL " << type << " Constructor Called\n";
}

Animal::Animal(const Animal& original)
{
    type = original.type;
}

Animal& Animal::operator=(const Animal& original)
{
    type = original.type;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "ANIMAL " << type << " don’t bark\n";
}

std::string Animal::getType() const
{
    return (type);
}

Animal::~Animal()
{
    std::cout << "ANIMAL " << type << " Destructor Called\n";
}