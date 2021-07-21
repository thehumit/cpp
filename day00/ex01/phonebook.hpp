#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook
{
	//first name, last name, nickname,
	//phone number,darkest secret
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		void add();
		// void printer();

};

void input(std::string &command, PhoneBook contacts[8], int &i, int &k);

#endif
