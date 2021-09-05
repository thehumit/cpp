#include "Bureaucrat.hpp"  

int main()
{
    Bureaucrat *ti;
    
    try
    {
        ti = new Bureaucrat("John", 0);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}