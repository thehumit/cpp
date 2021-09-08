#include <iostream>
#include <cstdint>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data *data = new Data();
	std::cout << data << std::endl;
	uintptr_t p = serialize(data);
	std::cout << p << std::endl;
	std::cout << deserialize(p) << std::endl;
	std::cout << data << std::endl;
	
}
