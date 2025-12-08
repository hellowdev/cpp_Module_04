#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    {
        std::cout << "-------------MORE TESTS------------\n";
        AMateria *i = new Ice;
        AMateria *c = new Cure;
        Character oldcharac("ME");
        oldcharac.equip(i);
        oldcharac.equip(c);
        oldcharac.use(0, oldcharac);
        oldcharac.use(1, oldcharac);
        Character newChar(oldcharac);
        newChar.use(0, oldcharac);
        newChar.use(1, oldcharac);
        oldcharac = newChar;
        oldcharac.use(0, oldcharac);
        oldcharac.use(1, oldcharac);
        
        delete i;
        delete c;
    }
    return 0;
}