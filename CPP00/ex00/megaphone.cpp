#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		while(*++argv)
		{
		std::string str (*argv);
		for(std::string::iterator i=str.begin(); i!=str.end(); i++)
			*i = toupper(*i);
		std::cout << str;
		}	
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}