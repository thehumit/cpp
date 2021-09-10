#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain();
    Brain(const Brain &cp);
    Brain& operator= (const Brain &cp);
    ~Brain();
    void setIdea(std::string idea);
    std::string getIdea(void) const;
};




#endif