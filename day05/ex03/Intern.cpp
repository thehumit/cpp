#include "Intern.hpp"

Intern::Intern()
{   }

Intern&	Intern::operator= (const Intern &cp)
{
    if (this == &cp)
        return (*this);
	return (*this);
}

Intern::Intern(const Intern &cp)
{
    (*this) = cp;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called." << std::endl;
}

Form *Intern::makeForm(std::string type, std::string target)
{
    int caseNum = -1;

    std::string arr[3] = {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon"
    };

    for (int i = 0; i < 3; i++)
    {
        if (arr[i].find(type) != std::string::npos)
        {
            caseNum = i;
            break ;
        }
    }

    switch (caseNum)
    {
    case 0:
        return (new RobotomyRequestForm(target));
    case 1:
        return (new ShrubberyCreationForm(target));
    case 2:
        return (new PresidentialPardonForm(target));
    case -1:
        throw Intern::NoFormToCreate();
        break;
    }
    return (NULL);
}