#include "MySed.hpp"

int main(int argc, char *argv[])
{
	if (argc == 4)
		MySed sed(argv[1], argv[2], argv[3]);

//	std::ifstream ifile;
//	std::ofstream ofile;
//	std::string text;
//	std::string ofname;
//	std::size_t pos;
//	std::string s1;
//	std::string s2;
//	int			s1len;
//	int			s2len;

//-----------------------------------------Getting All text from file.----------------------------
//	ifile.open(argv[1]);

//	std::getline(ifile, text, '\0');

//	std::cout << text << std::endl;
	
//	ifile.close();
//-----------------------------------------Preparing output file name------------------------------
//	ofname.append(argv[1]);
//	ofname.append(".replace");
//-----------------------------------------Replacing text------------------------------------------
//	s1 = argv[2];
//	s1len = strlen(argv[2]);
//	s2 = argv[3];
//	s2len = s2.length();

//	pos = text.find(argv[2]);
//	while(pos != std::string::npos)
//	{
//		text.erase(pos, s1len);
//		text.insert(pos, argv[3]);
//		pos = text.find(argv[2]);
//	}
//-----------------------------------------Writing to output file----------------------------------
//	ofile.open(ofname.c_str());
//
//	ofile << text;
//
//	ofile.close();
//
//	return 0;

}

