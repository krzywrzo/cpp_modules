/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 17:32:27 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/02 16:51:18 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm :: PresidentialPardonForm (const std::string &target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout<<"PresidentialPardonForm constructor called"<<std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &exec) const
{
	this->checkRequirements(exec);
	std::cout<<this->target<<" has been pardoned by Zaphod Beebkebrox"<<std::endl;
	
}

PresidentialPardonForm :: ~PresidentialPardonForm ()
{
	std::cout<<"PresidentialPardonForm destructor called"<<std::endl;
}