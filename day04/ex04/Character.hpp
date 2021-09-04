#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class ICharacter;
class AMateria;

class Character
    : public ICharacter
{
private:
    AMateria *_materia[4];
    std::string _name;
public:
    Character(std::string const &name = "tquintan");
    Character&	operator= (const Character &cp);
    Character(const Character &cp);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

Character::Character(std::string const &name)
    : _name(name)
{
    for (int i = 0; i < 4; i++)
    {
        this->_materia[i] = NULL;
    }
    std::cout << "Character constructor called." << std::endl;
}

Character&	Character::operator= (const Character &cp)
{
	// std::cout << "Character assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
    this->_name = cp._name;
	return (*this);
}

Character::Character(const Character &cp)
{
    (*this) = cp;
}

Character::~Character()
{
    std::cout << "Character destructor called." << std::endl;
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        // std::cout << m->getType() << std::endl;
        if (this->_materia[i] == NULL)
        {
            this->_materia[i] = m;
            break ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return ;
    this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return ;
    if (this->_materia[idx])
    {
        // std::cout << idx << std::endl;
        this->_materia[idx]->use(target);
    }
}


#endif