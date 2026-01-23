#include "phonebook.hpp"

void Contact::set_info()
{
    std::cout << "Insert first name:" << std::endl;
    std::getline(std::cin, this->first_name);

    std::cout << "Insert last name:" << std::endl;
    std::getline(std::cin, this->last_name);

    std::cout << "Insert phone number:" << std::endl;
    std::getline(std::cin, this->phone_number);

    std::cout << "Insert darkest secret:" << std::endl;
    std::getline(std::cin, this->darkest_secret);

    std::cout << "Insert nickname:" << std::endl;
    std::getline(std::cin, this->nick);
}

std::string Contact::get_first_name() const {
    return this->first_name;
}

std::string Contact::get_last_name() const {
    return this->last_name;
}

std::string Contact::get_nickname() const {
    return this->nick;
}

void Contact::print_details() const {
    std::cout << "First Name: " << this->first_name << std::endl;
    std::cout << "Last Name: " << this->last_name << std::endl;
    std::cout << "Nickname: " << this->nick << std::endl;
    std::cout << "Phone Number: " << this->phone_number << std::endl;
    std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}