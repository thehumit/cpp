#include <string>
#include <iostream>

int main(void)
{
	std::string string= "HI THIS IS BRAIN";
	std::string& refString = string;
	std::string *ptrString = &string;

	std::cout << "stringPTR : " << ptrString << std::endl;
	std::cout << "stringREF : " << &refString << std::endl;

	std::cout << "string under PTR : " << *ptrString << std::endl;
	std::cout << "string under REF : " << refString << std::endl;

}
