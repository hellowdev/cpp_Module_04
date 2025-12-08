#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure& original);
        Cure& operator=(const Cure& original);
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Cure();

};

#endif