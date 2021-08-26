#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
private:
    Contact _contact[8];
public:
    void add(int i);
    void print_row(int i, PhoneBook book);
    void print_content(PhoneBook book, int i);
    void command_executor(std::string &command, int &i, int &k);
};

void input(std::string &command, PhoneBook book, int &i, int &k);

#endif