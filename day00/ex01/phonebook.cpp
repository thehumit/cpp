#include "phonebook.hpp"

void printer(std::string str)
{
	if (str.length() <= 10)
		std::cout << std::right << std::setw(10) << str.substr(0, 10);
	else
		std::cout << std::right << std::setw(10) << str.substr(0, 9) + ".";
}

void print_header()
{
	printer("index");
	std::cout << "|";
	printer("first name");
	std::cout << "|";
	printer("last name");
	std::cout << "|";
	printer("nickname");
	std::cout << std::endl;
}

void input(std::string &command, PhoneBook book, int &i, int &k)
{
	std::cout << "Please, write your command : ";
	while (getline(std::cin, command))
		book.command_executor(command, i, k);
}

void PhoneBook::add(int i)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Write first name : ";
	getline(std::cin, first_name);
    this->_contact[i].setFN(first_name);
	std::cout << "Write last name : ";
	getline(std::cin, last_name);
    this->_contact[i].setLN(last_name);
	std::cout << "Write nickname : ";
	getline(std::cin, nickname);
    this->_contact[i].setNick(nickname);
	std::cout << "Write phone number : ";
	getline(std::cin, phone_number);
    this->_contact[i].setPN(phone_number);
	std::cout << "Write darkest secret : ";
	getline(std::cin, darkest_secret);
    this->_contact[i].setDS(darkest_secret);
}

void PhoneBook::print_content(PhoneBook book, int i)
{
	std::cout << "index : " << i << std::endl;
	std::cout << "first name : " << book._contact[i].getFN() << std::endl;
	std::cout << "last name : " << book._contact[i].getLN() << std::endl;
	std::cout << "nickname : " << book._contact[i].getNick() << std::endl;
	std::cout << "phone number : " << book._contact[i].getPN() << std::endl;
	std::cout << "darkest secret : " << book._contact[i].getDS() << std::endl;
}

void PhoneBook::print_row(int i, PhoneBook book)
{
	std::cout << std::right << std::setw(10) << i;
	std::cout << "|";
	printer(book._contact[i].getFN());
	std::cout << "|";
	printer(book._contact[i].getLN());
	std::cout << "|";
	printer(book._contact[i].getNick());
	std::cout << std::endl;
}

void PhoneBook::command_executor(std::string &command, int &i, int &k)
{
	std::string index_str;
	if (command == "ADD")
	{
		if (i > 7)
			i = 0;
		std::cout << i << std::endl;
		this->add(i);
		{
			i++;
			if (k <= 7)
				k++;
		}
		input(command, *this, i, k);
	}
	if (command == "SEARCH")
	{
		print_header();
		for (int j = 0; j < k; j++)
			print_row(j, *this);
		std::cout << "Please, write index : ";
		getline(std::cin, index_str);
		try
		{
			if (std::stoi(index_str) <= i && std::stoi(index_str) > -1)
				print_content(*this, std::stoi(index_str));
			else
				std::cerr << "Not valid index" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Not valid index" << std::endl;
		}
		input(command, *this, i, k);
	}
	if (command == "EXIT")
		exit(0);
	input(command, *this, i, k);
}
