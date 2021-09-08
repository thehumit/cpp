#include <iostream>
#include <string>
#include <limits>
#include <cmath>

void toChar(double value)
{
    std::cout << "char:";
    if (value == -std::numeric_limits<double>::infinity() || value ==
        std::numeric_limits<double>::infinity() || std::isnan(value))
    {
        std::cout << "impossible" << std::endl;
        return ;
    }
    char a = static_cast<int>(value);
    if (a < 33 || a > 126)
    {
        std::cout << "Not printable" << std::endl;
    }
    else
    {
        std::cout << static_cast<char>(a) << std::endl;
    }
}

void toInt(double value)
{
    std::cout << "int:";
    if (value == -std::numeric_limits<double>::infinity() || value ==
        std::numeric_limits<double>::infinity() || std::isnan(value))
    {
        std::cout << "impossible" << std::endl;
        return ;
    }
    char a = static_cast<int>(value);
    if (a < 33 || a > 126)
    {
        std::cout << "Not printable" << std::endl;
    }
    else
    {
        std::cout << static_cast<char>(a) << std::endl;
    }
}


int main(int ac, char **av)
{
    double value;

    if (ac != 2)
        return (0);

    value = static_cast<double>(atof(av[1]));
    // std::cout << value << std::endl;
    try
    {
        toChar(value);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}