# include "phonebook.hpp"

std::string format_column(std::string text) {
    if (text.length() > 10)
        return text.substr(0, 9) + ".";
    return text;
}

void	PhoneBook :: ft_add()
{
	this->contacts[index % 8].set_info();

	this->index++;
}

void PhoneBook::print_table() {
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|" << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    std::cout << "|__________|__________|__________|__________|" << std::endl;
    for (int i = 0; i < 8; i++)
	 {
        if (this->contacts[i].get_first_name().empty())
            continue;
        std::cout << "|" << std::setw(10) << i << "|";
        std::cout << std::setw(10) << format_column(this->contacts[i].get_first_name()) << "|";
        std::cout << std::setw(10) << format_column(this->contacts[i].get_last_name()) << "|";
        std::cout << std::setw(10) << format_column(this->contacts[i].get_nickname()) << "|" << std::endl;
    }
    std::cout << "_____________________________________________" << std::endl;
}

void PhoneBook::ft_search() 
{
    this->print_table();
    std::string input;
    std::cout << "Enter index to view details: ";
    if (!std::getline(std::cin, input)) {
        return; 
    }
    if (input.empty()) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    for (size_t i = 0; i < input.length(); i++) {
        if (!isdigit(input[i])) {
            std::cout << "Invalid index! Please enter a number." << std::endl;
            return;
        }
    }
    int index = std::atoi(input.c_str());
    if (index >= 0 && index < 8 && !this->contacts[index].get_first_name().empty()) {
        this->contacts[index].print_details();
    } else {
        std::cout << "Index out of range or empty!" << std::endl;
    }
}

PhoneBook :: PhoneBook()
{
	this->index = 0;
	this->contact_count = 0;
	std::cout<<"Phonebook created"<<std::endl;
}