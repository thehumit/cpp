#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
public:
	int complain( std::string level );
	void run(int i);
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
