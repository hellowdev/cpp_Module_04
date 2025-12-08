#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << type << " Constructor Called\n";
    DogBrain = new Brain();
}

Dog::Dog(const Dog& original)
{
    DogBrain = new Brain(*original.DogBrain);
    type = original.type;
}

Dog& Dog::operator=(const Dog& original)
{
    if (this != &original)
    {
        delete DogBrain;
        type = original.type;
        DogBrain = new Brain(*original.DogBrain);
    }
    return (*this);
}

void Dog::setCbrain(std::string cont)
{
    DogBrain->setIdea(cont);
}

void Dog::getCbrain()
{
    DogBrain->getIdea();
}

void Dog::makeSound() const
{
    std::cout << type << " bark\n";
}

Dog::~Dog()
{
    std::cout << type << " Destructor Called\n";
    delete DogBrain;
}