#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
    std::string _name;
    int _points;
public:
    Bureaucrat(std::string name = "deafault", int points = 1);
    Bureaucrat&	operator= (const Bureaucrat &cp);
    Bureaucrat(const Bureaucrat &cp);
    ~Bureaucrat();
    class GradeTooHighException
        : public std::exception
    {
    public:
        const char* what() const throw() { return "Your grade is too high."; }

    };
    class GradeTooLowException
        : public std::exception
    {
    public:
        const char* what() const throw() { return "Your grade is too low."; }

    };
};

Bureaucrat::Bureaucrat(std::string name, int points)
    : _name(name), _points(points)
{
    if (points < 1)
        throw Bureaucrat::GradeTooHighException();
    if (points > 150)
        throw Bureaucrat::GradeTooHighException();
    
}

Bureaucrat&	Bureaucrat::operator= (const Bureaucrat &cp)
{
    if (this == &cp)
        return (*this);
    this->_name = cp._name;
    this->_points = cp._points;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &cp)
{
    (*this) = cp;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called." << std::endl;
}

#endif