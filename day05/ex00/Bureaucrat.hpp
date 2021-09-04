#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
private:
    std::string _name;
    int _points;
public:
    Bureaucrat(std::string name = "deafault", int points = 1);
    ~Bureaucrat();
};

Bureaucrat::Bureaucrat(std::string name, int points)
    : _name(name), _points(points)
{
    if (points < 1 || points > 150)
        throw 1;
    
}

Bureaucrat::~Bureaucrat()
{
}


#endif