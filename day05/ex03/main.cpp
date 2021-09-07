#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Intern	intern;
		Form*	form1 = intern.makeForm("robotomy request", "robot");
		Form*	form2 = intern.makeForm("shrubbery creation", "tree");
		Form*	form3 = intern.makeForm("presidential pardon", "target");

		Bureaucrat				man1("JOHN", 4);
		
		form1->beSigned(man1);
		form1->execute(man1);

		form2->beSigned(man1);
		form2->execute(man1);

		form3->beSigned(man1);
		form3->execute(man1);

		Form*	form4 = intern.makeForm("hmm", "aaaaaa");
		form4->beSigned(man1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}