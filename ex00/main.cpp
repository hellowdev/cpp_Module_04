#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

{
    std::cout  << "-----------TEST OF WRONG ANIMALS-------------\n";

    const WrongAnimal *wrongAn  = new WrongAnimal();
    const WrongAnimal *wrongcat = new WrongCat();

    std::cout << wrongcat->getType() << " " << std::endl;
    wrongAn->makeSound();
    wrongcat->makeSound(); // this will call the base cuz we didnt use virtual
    delete wrongAn;
    delete wrongcat; // we have leaks of the derived class cuz we didnt use virtual
}
return 0;
}