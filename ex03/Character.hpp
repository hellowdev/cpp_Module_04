#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"


class Character : public ICharacter
{
    private:
        std::string charName;
        AMateria* slots[4];
    public:
        Character();
        Character(std::string name);
        std::string const & getName() const;
        Character(const Character& original);
        Character& operator=(const Character& original);
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        void deleteSlots();
        ~Character();
};

#endif