#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form("PresidentialPardonForm", true, 25, 5), _target(target)
{   }

PresidentialPardonForm&	PresidentialPardonForm::operator= (const PresidentialPardonForm &cp)
{
    if (this == &cp)
        return (*this);
    this->_target = cp._target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cp)
    : Form(cp)
{
    (*this) = cp;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw UnsignedFormFail();
    if (this->getGradeToExecute() < executor.getPoints())
        throw GradeTooLowException();
    std::ofstream outfile (this->_target + "_srubber");
    outfile << "          /\\      \n"
    " /\\*\\     \n"
    "/\\O\\*\\    \n"
   "/*/\\/\\/\\   \n"
  "/\\O\\/\\*\\/\\  \n"
 "/\\*\\/\\*\\/\\/\\ \n"
"/\\O\\/\\/*/\\/O/\\n"
"      ||      \n"
"      ||      \n"
"      ||      " << std::endl;
}