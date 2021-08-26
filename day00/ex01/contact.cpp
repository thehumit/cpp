#include "contact.hpp"

std::string Contact::getFN()
{
    return(this->first_name);
}
std::string Contact::getLN()
{
    return(this->last_name);
}
std::string Contact::getNick()
{
    return(this->nickname);
}
std::string Contact::getPN()
{
    return(this->phone_number);
}
std::string Contact::getDS()
{
    return(this->darkest_secret);
}
void Contact::setFN(std::string str)
{
    this->first_name = str;
}
void Contact::setLN(std::string str)
{
    this->last_name = str;
}
void Contact::setNick(std::string str)
{
    this->nickname = str;
}
void Contact::setPN(std::string str)
{
    this->phone_number = str;
}
void Contact::setDS(std::string str)
{
    this->darkest_secret = str;
}