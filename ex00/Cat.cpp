#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << type << " Constructor Called\n";
}

Cat::Cat(const Cat& original)
{
    type = original.type;
}

Cat& Cat::operator=(const Cat& original)
{
    type = original.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << type << " don’t bark\n";
}

Cat::~Cat()
{
    std::cout << type << " Destructor Called\n";
}