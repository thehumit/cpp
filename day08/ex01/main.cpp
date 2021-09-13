#include "span.hpp"

int main()
{
    Span sp = Span(5);
    try
    {
        sp.addNumber(-5);
        sp.addNumber(-3);
        sp.addNumber(-4);
        sp.addNumber(-4);
        sp.addNumber(-4);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return -1;
    }

    std::cout << sp.getVec();

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}