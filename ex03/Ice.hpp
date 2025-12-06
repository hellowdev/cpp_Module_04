#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
    // inhertiance from mother:
    // std::string type;
    public:
        Ice();
        Ice(const Ice& original);
        Ice& operator=(const Ice& original);
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Ice();

};

#endif