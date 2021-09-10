#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
// #include "Character.hpp"


class Cure
    :public AMateria
{
public:
    Cure(std::string const & type = "cure");
    Cure&	operator= (const Cure &cp);
    Cure(const Cure &cp);
    ~Cure();
    std::string const & getType() const; //Returns the materia type
    Cure* clone() const;
    void use(ICharacter& target) const;
};

#endif