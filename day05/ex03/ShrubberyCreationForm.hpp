#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

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

#endif
