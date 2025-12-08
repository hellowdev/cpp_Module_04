#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << type << " Constructor Called\n";
    CatBrain = new Brain();
    
}

Cat::Cat(const Cat& original)
{
    CatBrain = new Brain(*original.CatBrain);
    type = original.type;
}

Cat& Cat::operator=(const Cat& original)
{
    if (this != &original)
    {
        delete CatBrain;
        type = original.type;
        CatBrain = new Brain(*original.CatBrain);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << type << " don’t bark\n";
}

void Cat::setCbrain(std::string cont)
{
    CatBrain->setIdea(cont);
}

void Cat::getCbrain()
{
    CatBrain->getIdea();
}

Cat::~Cat()
{
    std::cout << type << " Destructor Called\n";
    delete CatBrain;
}