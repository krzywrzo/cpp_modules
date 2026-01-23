#include "phonebook.hpp"

int main()
{
	std::string cmd;
	PhoneBook pb1;
	while (cmd != "exit")
	{
		std::cout<<"Prompt 1 of 3 commands [ADD, SEARCH, EXIT]\n";
		getline(std::cin, cmd);
		if (cmd == "search" || cmd == "SEARCH")
			pb1.ft_search();
		else if (cmd == "add" || cmd == "ADD")
			pb1.ft_add();
		else if (cmd == "exit" || cmd == "EXIT")
			break;
		else
			continue;
	}	
}
