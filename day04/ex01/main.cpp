#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"


int main()
{
    Animal *array[10];
    for (int i = 0; i < 5; i++)
        array[i] = new Dog();
    for (int i = 4; i < 10; i++)
        array[i] = new Cat();
    for (int i = 0; i < 10; i++)
        delete array[i];
}