#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"
// #include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class MateriaSource
    : public IMateriaSource
{
private:
    AMateria *_memory[4];
public:
    MateriaSource();
    MateriaSource& operator= (const MateriaSource &cp);
    MateriaSource(const MateriaSource &cp);
    ~MateriaSource();
    void learnMateria(AMateria* ptr);
    AMateria* createMateria(std::string const & type);
};

#endif