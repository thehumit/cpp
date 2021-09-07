#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm
    : public Form
{
private:
    std::string _target;
    RobotomyRequestForm&	operator= (const RobotomyRequestForm &cp);
public:
    void execute(Bureaucrat const & executor) const;
    RobotomyRequestForm(std::string target = "home");
    RobotomyRequestForm(const RobotomyRequestForm &cp);
    ~RobotomyRequestForm();
};

#endif