#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("ShrubberyCreationForm", true, 145, 137), _target(target)
{    }

ShrubberyCreationForm&	ShrubberyCreationForm::operator= (const ShrubberyCreationForm &cp)
{
    if (this == &cp)
        return (*this);
    this->_target = cp._target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp)
    : Form(cp)
{
    (*this) = cp;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw UnsignedFormFail();
    if (this->getGradeToExecute() < executor.getPoints())
        throw GradeTooLowException();
    std::cout << this->_target + " has been pardoned by Zafod Beeblebrox." << std::endl;
}