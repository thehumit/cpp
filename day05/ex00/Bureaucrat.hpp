#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
    std::string _name;
    int _points;
public:
    Bureaucrat(std::string name = "deafault", int points = 1);
    Bureaucrat&	operator= (const Bureaucrat &cp);
    // std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat);
    Bureaucrat(const Bureaucrat &cp);
    ~Bureaucrat();
    class GradeTooHighException
        : public std::exception
    {
    public:
        const char* what() const throw() { return "Your grade is too high."; }

    };
    class GradeTooLowException
        : public std::exception
    {
    public:
        const char* what() const throw() { return "Your grade is too low."; }
    };
    std::string const &getName() const;
    int const &getPoints() const;
    void increment();
    void decrement();
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat);

#endif