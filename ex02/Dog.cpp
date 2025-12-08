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
        DogBrain = new Brain(*original.DogBrain);
        type = original.type;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << type << " bark\n";
}


void Dog::setCbrain(std::string cont)
{
    DogBrain->setIdea(cont);
}

void Dog::getCbrain()
{
    DogBrain->getIdea();
}

Dog::~Dog()
{
    std::cout << type << " Destructor Called\n";
    delete DogBrain;
}