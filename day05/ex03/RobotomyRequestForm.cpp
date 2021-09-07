#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("RobotomyRequestForm", true, 72, 45), _target(target)
{   }

RobotomyRequestForm&	RobotomyRequestForm::operator= (const RobotomyRequestForm &cp)
{
    if (this == &cp)
        return (*this);

    this->_target = cp._target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cp)
    : Form(cp)
{
    (*this) = cp;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw UnsignedFormFail();
    if (this->getGradeToExecute() < executor.getPoints())
        throw GradeTooLowException();
    if (rand() % 2 == 1)
        std::cout << "DRRRRRR " + this->_target + " has been authomized." << std::endl;
    else
        std::cout << "DRRRRRR " + this->_target + " has not been authomized." << std::endl;
}