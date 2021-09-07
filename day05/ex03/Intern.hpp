#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    /* data */
public:
    Intern();
    Intern&	operator= (const Intern &cp);
    // std::ostream& operator<< (std::ostream &out, const Intern &bureaucrat);
    Intern(const Intern &cp);
    ~Intern();
    Form *makeForm(std::string type, std::string target);
    class NoFormToCreate
        : public std::exception
    {
    public:
        const char* what() const throw() { return "No form to create."; }
    };
};

