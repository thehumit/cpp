#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	std::string s;
	std::string str;
	std::string str1 = av[2];
	std::string str2 = av[3];
	std::ifstream file(av[1]);
	std::ofstream out(std::string(av[1]) + ".replace");
	int start;

	while(!file.eof())
	{
		std::getline(file, str);
		s += str;
		s += "\n";
	}
	while (s.find(str1) != -1)
	{
		start = s.find(str1);
		s.erase(start, str1.length());
		s.insert(start, str2);
	}

	out << s;
}
