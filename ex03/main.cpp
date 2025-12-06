#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"


int main()
{
   AMateria *m = new Ice;

    // Character *oldcharac = new Character("hi");

    // Character oldcharac("hi");
    Character onechar("CC");
    // onechar = oldcharac;
    onechar.equip(m);
    Character twochar(onechar);
    onechar = twochar;
    onechar = twochar;
    
    twochar.use(1, onechar);


    
    // system("leaks myprog");
}
// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
//     return 0;
// }