#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << type << " Constructor Called\n";
}

Dog::Dog(const Dog& original)
{
    type = original.type;
}

void Dog::makeSound() const
{
    std::cout << type << " bark\n";
}

Dog& Dog::operator=(const Dog& original)
{
    type = original.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << type << " Destructor Called\n";
}