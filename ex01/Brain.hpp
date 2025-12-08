#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& original);
        Brain& operator=(const Brain& original);
        void setIdea(std::string cont);
        void getIdea();
        ~Brain();
};

#endif