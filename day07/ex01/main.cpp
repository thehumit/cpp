#include "iter.hpp"

int myFunc(int a)
{
    int res = a * a;
    std::cout << "Res :" << res << std::endl;
    return (res);
}

int main( void )
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    iter(arr, 7, myFunc);
}