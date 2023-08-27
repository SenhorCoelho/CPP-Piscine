#include "MySed.hpp"

int main(int argc, char *argv[])
{
	if (argc == 4)
		MySed sed(argv[1], argv[2], argv[3]);
	return 0;
}

