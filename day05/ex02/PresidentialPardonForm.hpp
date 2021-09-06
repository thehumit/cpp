#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm
    : public Form
{
private:
    std::string _target;
public:
    void execute(Bureaucrat const & executor) const;
    PresidentialPardonForm(std::string target = "home");
    PresidentialPardonForm&	operator= (const PresidentialPardonForm &cp);
    PresidentialPardonForm(const PresidentialPardonForm &cp);
    ~PresidentialPardonForm();
};

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form("PresidentialPardonForm", true, 145, 137), _target(target)
{
    // if (this->getGradeToExecute < 1)
    //     throw PresidentialPardonForm::GradeTooHighException();
    // if (this->getGradeToExecute > 150)
    //     throw PresidentialPardonForm::GradeTooLowException();
    // if (this->getGradeToSign < 1)
    //     throw PresidentialPardonForm::GradeTooHighException();
    // if (this->getGradeToSign > 150)
    //     throw PresidentialPardonForm::GradeTooLowException();
    
}

PresidentialPardonForm&	PresidentialPardonForm::operator= (const PresidentialPardonForm &cp)
{
    if (this == &cp)
        return (*this);
    this->Form::operator=(cp);
    this->_target = cp._target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cp)
{
    (*this) = cp;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    std::ofstream outfile (this->_target + "_srubber");
}