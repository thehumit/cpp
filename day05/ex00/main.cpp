#include "Bureaucrat.hpp"  

int main()
{
    Bureaucrat *ti;
    
    ti = new Bureaucrat("John", 2);
    std::cout << *ti << std::endl;

    try
    {
        ti->increment();
        ti->increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete ti;
    try
    {
        ti = new Bureaucrat("John", 150);
        ti->decrement();
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}