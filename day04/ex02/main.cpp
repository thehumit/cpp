#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
// #include "WrongCat.hpp"
// #include "WrongDog.hpp"

int main()
{
    // Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    delete i;
    delete j;
}