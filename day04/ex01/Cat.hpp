#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat
    : public Animal
{
private:
    Brain *_brain;
protected:
    std::string _type;
public:
    Cat(std::string type = "Cat");
    Cat(const Cat &cp);
    Cat&	operator= (const Cat &cp);
    void makeSound() const;
    std::string getType();
    ~Cat();
};

#endif