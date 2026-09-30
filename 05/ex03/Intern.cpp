/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 18:00:53 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/02 20:59:09 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern:: Intern()
{
	std::cout<<"Intern constructor called"<<std::endl;
}

Intern:: ~Intern()
{
	std::cout<<"Intern destructor called"<<std::endl;
}

AForm* Intern:: makeRobotomy(const std::string& target) const
{
	return new RobotomyRequestForm(target);
}

 AForm* Intern:: makeShrubbery(const std::string& target) const
{
	return new ShrubberyCreationForm(target);
}

AForm* Intern:: makePardon(const std::string& target) const
{
	return new PresidentialPardonForm(target);	
}

AForm* Intern:: makeForm(std::string name, std::string target)
{
	std::string form_arr[3] = {"presidential pardon", "shrubbery tree", "robotomy request"};
	AForm* (Intern::*funcs[])(const std::string& target) const = {
		&Intern::makePardon,
		&Intern::makeShrubbery,
		&Intern::makeRobotomy
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == form_arr[i])
		{
			std::cout<<"Intern creates "<<name<<std::endl;
			return (this->*funcs[i])(target);
		}
	}
	std::cout<<"Intern cannot create form "<<name<<" because it doesnt exist"<<std::endl;
	return NULL;
}