#include "MySed.hpp"

MySed::MySed(std::string filename, std::string s1, std::string s2)
	: _filename (filename), _s1(s1), _s2(s2)
{
	std::ifstream	ifile;
	std::ofstream	ofile;
	std::string		ofilename;
	std::string		content;
	std::size_t		pos;
	int				s1len;

	s1len = this->_s1.length();
	ofilename = this->_filename + ".replace";

	ifile.open(this->_filename.c_str());
	if (ifile.is_open())
	{
		std::getline(ifile, content, '\0');
		ifile.close();
	}
	else
	{
		std::cout << "Failed to open input file." << std::endl;
		return ;
	}

	if (s1len > 0)
	{
		pos = content.find(this->_s1);
		while(pos != std::string::npos)
		{
			content.erase(pos, s1len);
			content.insert(pos, this->_s2);
			pos = content.find(this->_s1);
		}
	}

	ofile.open(ofilename.c_str());
	if (ofile.is_open())
	{
		ofile << content;
		ofile.close();
	}
	else
	{
		std::cout << "Failed to open output file." << std::endl;
		return ;
	}
	return;
}

MySed::~MySed(void)
{
	return;
}