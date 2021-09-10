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
    if (value == -std::numeric_limits<double>::infinity() || value ==
        std::numeric_limits<double>::infinity())
    {
        std::cout << "impossible" << std::endl;
        return ;
    }
    int a = static_cast<int>(value);
    std::cout << static_cast<int>(a) << std::endl;
}

void toDouble(double value)
{
    std::cout << "double:";
    // if (value == -std::numeric_limits<double>::infinity() || value ==
    //     std::numeric_limits<double>::infinity())
    // {
    //     std::cout << "impossible" << std::endl;
    //     return ;
    // }
    if (value == -std::numeric_limits<double>::infinity())
    {
        std::cout << "-inf" << std::endl;
        return ;
    }
    if (value == std::numeric_limits<double>::infinity())
    {
        std::cout << "inf" << std::endl;
        return ;
    }
    if (std::isnan(value))
    {
        std::cout << "nan" << std::endl;
        return ;
    }
    std::cout << static_cast<double>(value) << std::endl;
}

void toFloat(double value)
{
    std::cout << "float:";
    if (value == -std::numeric_limits<double>::infinity())
    {
        std::cout << "-inff" << std::endl;
        return ;
    }
    if (value == std::numeric_limits<double>::infinity())
    {
        std::cout << "inff" << std::endl;
        return ;
    }
    if (std::isnan(value))
    {
        std::cout << "nanf" << std::endl;
        return ;
    }
    std::cout << static_cast<float>(value) << "f" << std::endl;
}

int main(int ac, char **av)
{
    double value;

    if (ac != 2)
        return (0);
    std::cout.precision(1);
    std::cout << std::fixed;
    value = static_cast<double>(atof(av[1]));
    try
    {
        toChar(value);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        toInt(value);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        toFloat(value);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        toDouble(value);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
