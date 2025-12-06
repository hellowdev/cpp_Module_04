#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Uknown")
{
    std::cout << "WrongAnimal " << type << " Constructor Called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& original)
{
    type = original.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& original)
{
    type = original.type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal " << type << " don’t bark\n";
}

std::string WrongAnimal::getType() const
{
    return (type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal " << type << " Destructor Called\n";
}