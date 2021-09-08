#include "Base.hpp"

int main(void)
{
    srand(time(NULL));
    Base *a = generate();
    identify(*a);
    
    identify(a);
}


