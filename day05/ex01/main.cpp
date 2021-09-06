#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat *ti;
    
    
    ti = new Bureaucrat("John", 2);
    std::cout << *ti << std::endl;

    try
    {
        Form form("apple", false, 0, 160);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Form form("apple", false, 1, 160);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete ti;
    try
    {
        Form form("apple", false, 1, 160);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        ti = new Bureaucrat("John", 150);
        ti->decrement();
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat john("John", 150);
        Form form("apple", false, 1, 16);
        form.beSigned(john);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return (0);
}