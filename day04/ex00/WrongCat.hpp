#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat
    : public WrongAnimal
{
protected:
    std::string _type;
public:
    WrongCat(std::string type = "WrongCat");
    WrongCat(const WrongCat &cp);
    WrongCat&	operator= (const WrongCat &cp);
    void makeSound() const;
    std::string getType();
    ~WrongCat();
};

#endif