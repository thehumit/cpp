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

#endif