#ifndef MATERIASOURCE
#define MATERIASOURCE
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *slots[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& original );
        MateriaSource& operator=(const MateriaSource& original);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        ~MateriaSource();
};

#endif