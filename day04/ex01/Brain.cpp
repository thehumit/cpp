#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain is created" << std::endl;
}

void Brain::setIdea(std::string idea)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = idea;
}

std::string Brain::getIdea(void) const
{
    return (this->_ideas[0]);
}

Brain& Brain::operator= (const Brain &cp)
{
    if (this == &cp)
        return (*this);
    // this->_ideas = cp._ideas;
    this->setIdea(cp.getIdea());
    return (*this);
}

Brain::Brain(const Brain &cp)
{
    (*this) = cp;
}

Brain::~Brain()
{
    std::cout << "Brain is destructed" << std::endl;
}
