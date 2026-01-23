# ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>
# include <stdio.h>
# include <iomanip>

class Contact {
	public:
	int index;
	std::string	first_name;
	std::string	last_name;
	std::string phone_number;
	std::string darkest_secret;
	std::string	nick;

	void	set_info();
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	void print_details() const;
};

class PhoneBook{
	private:
	Contact contacts[8];
	int		index;
	int		contact_count;
	
	public:
	PhoneBook();
	void	print_table();
	void	ft_add();
	void	ft_search();
};

std:: string format_column(std::string text);

# endif