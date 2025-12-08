#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *CatBrain;
    public:
        Cat();
        Cat(const Cat& original);
        Cat& operator=(const Cat& original);
        void makeSound() const;
        void setCbrain(std::string cont);
        void getCbrain();
        ~Cat();
};


#endif