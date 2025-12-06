#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        delete j;//should not create a leak
        delete i;
    }

std::cout << "----------test deep copy--------\n";

    {
        Animal* animal[20];
        for (int i = 0; i < 20; i++)
        {
            if (i > 9)
                animal[i] = new Cat;
            else
                animal[i] = new Dog;
        }
std::cout << "----------DESTRUCTOR CHAINING--------\n";
        for (int j = 0; j < 20; j++)
            delete animal[j];
    }
    return 0;
}
