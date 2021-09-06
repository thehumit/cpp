#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string _name;
    bool _signed;
    int _gradeToSign;
    int _gradeToExecute;
public:
    Form(std::string name = "default", bool signature = false, int gradeToSign = 1, int gradeToExecute = 1);
    Form&	operator= (const Form &cp);
    // std::ostream& operator<< (std::ostream &out, const Form &form);
    Form(const Form &cp);
    ~Form();
    class GradeTooHighException
        : public std::exception
    {
    public:
        const char* what() const throw() { return "Your form grade is too high."; }
    };
    class GradeTooLowException
        : public std::exception
    {
    public:
        const char* what() const throw() { return "Your form grade is too low."; }
    };
    class UnsignedFormFail
        : public std::exception
    {
    public:
        const char* what() const throw() { return "Your form isn't signed."; }
    };
    std::string const &getName() const;
    bool const getSigned() const;
    int const getGradeToExecute() const;
    int const getGradeToSign() const;
    void incrementSign();
    void decrementSign();
    void incrementExcute();
    void decrementExcute();
    virtual void beSigned(Bureaucrat &bureaucrat);
    virtual void execute(Bureaucrat const & executor) const = 0;
};

#endif