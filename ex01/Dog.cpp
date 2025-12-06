#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << type << " Constructor Called\n";
    DogBrain = new Brain();
}

Dog::Dog(const Dog& original)
{
    if (this->DogBrain != original.DogBrain)
    {
        DogBrain = new Brain(*original.DogBrain);
        type = original.type;
    }
}

void Dog::makeSound() const
{
    std::cout << type << " bark\n";
}

Dog& Dog::operator=(const Dog& original)
{
    if (this->DogBrain != original.DogBrain)
    {
        delete DogBrain;
        DogBrain = new Brain(*original.DogBrain);
        type = original.type;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << type << " Destructor Called\n";
    delete DogBrain;
}