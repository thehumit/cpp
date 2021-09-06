#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm
    : public Form
{
private:
    std::string _target;
public:
    void execute(Bureaucrat const & executor) const;
    ShrubberyCreationForm(std::string target = "home");
    ShrubberyCreationForm&	operator= (const ShrubberyCreationForm &cp);
    ShrubberyCreationForm(const ShrubberyCreationForm &cp);
    ~ShrubberyCreationForm();
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("ShrubberyCreationForm", true, 145, 137), _target(target)
{
    // if (this->getGradeToExecute < 1)
    //     throw ShrubberyCreationForm::GradeTooHighException();
    // if (this->getGradeToExecute > 150)
    //     throw ShrubberyCreationForm::GradeTooLowException();
    // if (this->getGradeToSign < 1)
    //     throw ShrubberyCreationForm::GradeTooHighException();
    // if (this->getGradeToSign > 150)
    //     throw ShrubberyCreationForm::GradeTooLowException();
    
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator= (const ShrubberyCreationForm &cp)
{
    if (this == &cp)
        return (*this);
    this->Form::operator=(cp);
    this->_target = cp._target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp)
{
    (*this) = cp;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

// void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
// {

// }