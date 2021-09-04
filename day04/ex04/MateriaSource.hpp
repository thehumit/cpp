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

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        this->_memory[i] = NULL;
    }
    std::cout << "MateriaSource constructor called." << std::endl;
}

MateriaSource&	MateriaSource::operator= (const MateriaSource &cp)
{
	// std::cout << "AMateria assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
    for (int i = 0; i < 4; i++)
    {
        this->_memory[i] = cp._memory[i];
    }
	return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &cp)
{
    (*this) = cp;
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria* ptr)
{
    if (ptr == NULL)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (_memory[i])
            if (ptr->getType() == _memory[i]->getType())
                return ;

        if (!_memory[i])
        {
            _memory[i] = ptr;
            break ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        std::cout << this->_memory[i]->getType() << std::endl;
        if (_memory[i])
            if (this->_memory[i]->getType() == type)
            {
                return(this->_memory[i]->clone());
            }
    }
    return (NULL);
}


#endif