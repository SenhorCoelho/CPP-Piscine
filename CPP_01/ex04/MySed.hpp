#ifndef MYSED_HPP
# define MYSED_HPP
# include <fstream>
# include <string>
# include <cstring>
# include <iostream>

class MySed
{
	public:

		MySed(std::string filename, std::string s1, std::string s2);
		~MySed(void);
		
	private:

		std::string _filename;		
		std::string _s1;
		std::string _s2;
};

#endif