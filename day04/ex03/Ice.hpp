#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
// #include "Character.hpp"

class Ice
    :public AMateria
{
public:
    Ice(std::string const & type = "ice");
    Ice&	operator= (const Ice &cp);
    Ice(const Ice &cp);
    ~Ice();
    std::string const & getType() const; //Returns the materia type
    Ice* clone() const;
    void use(ICharacter& target) const;
};

#endif