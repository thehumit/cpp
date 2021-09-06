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
    // std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat);
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
    std::string const &getName() const;
    int const &getPoints() const;
    void increment();
    void decrement();
};

Bureaucrat::Bureaucrat(std::string name, int points)
    : _name(name), _points(points)
{
    if (points < 1)
        throw Bureaucrat::GradeTooHighException();
    if (points > 150)
        throw Bureaucrat::GradeTooLowException();
    
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

std::string const &Bureaucrat::getName() const
{
    return this->_name;
}

int const &Bureaucrat::getPoints() const
{
    return this->_points;
}

void Bureaucrat::increment()
{
    if (this->_points - 1 < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    this->_points--;
}

void Bureaucrat::decrement()
{
    if (this->_points + 1 > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    this->_points++;
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat)
{
    // Поскольку operator<< является другом класса Bureaucrat, то мы имеем прямой доступ к членам Bureaucrat
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getPoints() << ".";
    return out;
}

#endif