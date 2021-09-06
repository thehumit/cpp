#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm
    : public Form
{
private:
    std::string _target;
public:
    void execute(Bureaucrat const & executor) const;
    RobotomyRequestForm(std::string target = "home");
    RobotomyRequestForm&	operator= (const RobotomyRequestForm &cp);
    RobotomyRequestForm(const RobotomyRequestForm &cp);
    ~RobotomyRequestForm();
};

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("RobotomyRequestForm", true, 145, 137), _target(target)
{
    // if (this->getGradeToExecute < 1)
    //     throw RobotomyRequestForm::GradeTooHighException();
    // if (this->getGradeToExecute > 150)
    //     throw RobotomyRequestForm::GradeTooLowException();
    // if (this->getGradeToSign < 1)
    //     throw RobotomyRequestForm::GradeTooHighException();
    // if (this->getGradeToSign > 150)
    //     throw RobotomyRequestForm::GradeTooLowException();
    
}

RobotomyRequestForm&	RobotomyRequestForm::operator= (const RobotomyRequestForm &cp)
{
    if (this == &cp)
        return (*this);
    this->Form::operator=(cp);
    this->_target = cp._target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cp)
{
    (*this) = cp;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

// void RobotomyRequestForm::execute(Bureaucrat const & executor) const
// {

// }