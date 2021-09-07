#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, bool signature, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(signature), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToExecute > 150)
        throw Form::GradeTooLowException();
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
    
}

Form&	Form::operator= (const Form &cp)
{
    if (this == &cp)
        return (*this);
    this->_signed = cp._signed;
    // this->_name = cp._name;
    // this->_gradeToSign = cp._gradeToSign;
    // this->_gradeToExecute = cp._gradeToExecute;
	return (*this);
}

Form::Form(const Form &cp)
    : _name(cp._name), _signed(cp._signed), _gradeToSign(cp._gradeToSign), _gradeToExecute(cp._gradeToExecute)
{
    (*this) = cp;
}

Form::~Form()
{
    std::cout << "Form destructor called." << std::endl;
}

std::string const &Form::getName() const
{
    return this->_name;
}

bool const Form::getSigned() const
{
    return this->_signed;
}

int const Form::getGradeToSign() const
{
    return this->_gradeToSign;
}

int const Form::getGradeToExecute() const
{
    return this->_gradeToExecute;
}

std::ostream& operator<< (std::ostream &out, const Form &form)
{
    out << form.getName() << " form. Signing status:" << form.getSigned() << " Grade to sign: "  << form.getGradeToSign() << 
        ", grade to execute " << form.getGradeToExecute() << ".";
    return out;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getPoints() > this->_gradeToSign)
    {
        bureaucrat.signForm(*this, 0);
        throw Form::GradeTooLowException();
    }
    else
    {
        this->_signed = true;
        bureaucrat.signForm(*this, 0);
    }
}

