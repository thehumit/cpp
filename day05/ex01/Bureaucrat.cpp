#include "Form.hpp"
#include "Bureaucrat.hpp"

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

void Bureaucrat::signForm(Form &form, bool flag) const
{
    if (flag)
        std::cout << this->getName() << " signs " << form.getName() << ".";
    else
        std::cout << this->getName() << "cannot signs " << form.getName() << " because his grade is too low.";
}
