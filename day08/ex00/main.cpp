#include "Easyfind.hpp"

int main(void)
{
    srand(time(0));
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(1 + rand() % 10);
    }
    try
    {
        std::cout << easyfind(v, 5) << std::endl;
    }
    catch(int i)
    {
        std::cerr << "There's no such value in cantainer." << '\n';
    }

}