#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << type << " Constructor Called\n";
}

WrongCat::WrongCat(const WrongCat& original)
{
    type = original.type;
}

WrongCat& WrongCat::operator=(const WrongCat& original)
{
    type = original.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << type << " don’t bark\n";
}

WrongCat::~WrongCat()
{
    std::cout << type << " Destructor Called\n";
}