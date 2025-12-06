#ifndef WRONGCAT
#define WRONGCAT
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& original);
        WrongCat& operator=(const WrongCat& original);
        void makeSound() const;
        ~WrongCat();
};



#endif