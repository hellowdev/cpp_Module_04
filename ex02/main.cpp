#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        
        delete j;//should not create a leak
        delete i;
    }

    {
        std::cout << "----------TEST--------\n";
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

    {
        std::cout << "----------DEEP COPY--------\n";

        Cat cat1;
        Cat cat2;
        Dog dog1;
        Dog dog2;
        cat1.setCbrain("CAAAT 1 IDEA");
        cat2.setCbrain("CAAAT 2 IDEA");
        dog1.setCbrain("DOOG 1 IDEA");
        dog2.setCbrain("DOOG 2 IDEA");
        
        cat1 = cat2;
        dog1 = dog2;
        cat1.getCbrain();
        dog1.getCbrain();
    
    }
    {
        std::cout << "----------CANT CREATE AN ABSTRACT OBJ--------\n";
        // Animal x;
    }
    return 0;
}
