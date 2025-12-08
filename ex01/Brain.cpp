#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor Called\n";
}

Brain::Brain(const Brain& original)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = original.ideas[i];
}

Brain& Brain::operator=(const Brain& original)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = original.ideas[i];
    return (*this);
}

void Brain::setIdea(std::string cont)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = cont;
}

void Brain::getIdea()
{
    for (int i = 0; i < 100; i++)
        std::cout << ideas[i] << '\n';
}
Brain::~Brain()
{
    std::cout << "Brain Destructor Called\n";
}