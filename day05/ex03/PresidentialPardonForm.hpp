#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

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

#endif