#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
    std::string[100] ideas;
public:
    Brain();
    ~Brain();
};

Brain::Brain()
{
    std::cout << "Brain is created" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain is destructed" << std::endl;
}


#endif