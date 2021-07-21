#include "phonebook.hpp"

void printer(std::string str)
{
	if (str.length() <= 10)
		std::cout << std::right << std::setw(10) << str.substr(0, 10);
	else
		std::cout << std::right << std::setw(10) << str.substr(0, 9) + ".";
}

void print_content(PhoneBook contact, int i)
{
	std::cout << "index : " << i << std::endl;
	std::cout << "first name : " << contact.first_name << std::endl;
	std::cout << "last name : " << contact.last_name << std::endl;
	std::cout << "nickname : " << contact.nickname << std::endl;
	std::cout << "phone number : " << contact.phone_number << std::endl;
	std::cout << "darkest secret : " << contact.darkest_secret << std::endl;
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

void print_row(int i, PhoneBook contact)
{
	std::cout << std::right << std::setw(10) << i;
	std::cout << "|";
	printer(contact.first_name);
	std::cout << "|";
	printer(contact.last_name);
	std::cout << "|";
	printer(contact.nickname);
	std::cout << std::endl;
}

void command_executor(std::string &command, int &i, int &k, PhoneBook contacts[8])
{
	std::string index_str;
	if (command == "ADD")
	{
		if (i > 7)
			i = 0;
		std::cout << i << std::endl;
		contacts[i].add();
		{
			i++;
			if (k <= 7)
				k++;
		}
		input(command, contacts, i, k);
	}
	if (command == "SEARCH")
	{
		print_header();
		for (int j = 0; j < k; j++)
			print_row(j, contacts[j]);
		std::cout << "Please, write index : ";
		getline(std::cin, index_str);
		try
		{
			if (std::stoi(index_str) <= i && std::stoi(index_str) > -1)
				print_content(contacts[std::stoi(index_str)], std::stoi(index_str));
			else
				std::cerr << "Not valid index" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Not valid index" << std::endl;
		}
		input(command, contacts, i, k);
	}
	if (command == "EXIT")
		exit(0);
	input(command, contacts, i, k);
}

void input(std::string &command, PhoneBook contacts[8], int &i, int &k)
{
	std::cout << "Please, write your command : ";
	while (getline(std::cin, command))
		command_executor(command, i, k, contacts);
}


void PhoneBook::add()
{
	std::cout << "Write first name : ";
	getline(std::cin, first_name);
	std::cout << "Write last name : ";
	getline(std::cin, last_name);
	std::cout << "Write nickname : ";
	getline(std::cin, nickname);
	std::cout << "Write phone number : ";
	getline(std::cin, phone_number);
	std::cout << "Write darkest secret : ";
	getline(std::cin, darkest_secret);
}

int main()
{
	std::string command;
	PhoneBook contacts[8];
	int i = 0;
	int k = 0;

	input(command, contacts, i, k);
	return (0);
}
