#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	//first name, last name, nickname,
	//phone number,darkest secret
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		// void printer();
	public:
		std::string getFN();
		std::string getLN();
		std::string getNick();
		std::string getPN();
		std::string getDS();
		void setFN(std::string str);
		void setLN(std::string str);
		void setNick(std::string str);
		void setPN(std::string str);
		void setDS(std::string str);
};

// void input(std::string &command, Contact contacts[8], int &i, int &k);

#endif
