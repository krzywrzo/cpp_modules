#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <string>

void to_upper(std::string &str)
{
	size_t i = 0;
	while(i < str.length())
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		std::cout<<str[i];
		i++;
	}
}

int main (int argc, char **argv)
{
	int i = 1;
	while (i < argc)
	{
		std::string input = argv[i];
		to_upper(input);
		if (!(i + 1 >= argc))
			std::cout<<" ";
		i++;
	}
	return (0);
}