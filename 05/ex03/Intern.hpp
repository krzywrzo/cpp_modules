/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:55:24 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/02 20:56:08 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP 

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
	private:
		AForm *makeRobotomy(const std::string& target) const;
		AForm *makeShrubbery(const std::string& target) const;
		AForm *makePardon(const std::string& target) const;

	public:
		AForm*	makeForm(std::string name, std::string target);
		Intern();
		~Intern();
	
};

#endif