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

Brain::~Brain()
{
    std::cout << "Brain Destructor Called\n";
}