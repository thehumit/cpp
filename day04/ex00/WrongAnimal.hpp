#ifndef WORNGANIMAL_HPP
#define WORNGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal(std::string type = "WrongAnimal");
    WrongAnimal(const WrongAnimal &cp);
    WrongAnimal&	operator= (const WrongAnimal &cp);
    void makeSound() const;
    std::string getType();
    ~WrongAnimal();
};

#endif