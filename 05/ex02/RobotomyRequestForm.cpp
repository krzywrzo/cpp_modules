/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 16:53:42 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/02 16:58:57 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm :: RobotomyRequestForm (const std::string &target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout<<"RobotomyRequestForm constructor called"<<std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &exec) const
{
	this->checkRequirements(exec);
	std::cout<<"some drilling noises..."<<std::endl;
	int success_chance = rand() % 101;
	if (success_chance >= 50)
	{
		std::cout<<this->target<<" has been robotomized successfully"<<std::endl;	
	}
	else
	{
		std::cout<<"Robotomy failed"<<std::endl;
	}
}

RobotomyRequestForm :: ~RobotomyRequestForm ()
{
	std::cout<<"RobotomyRequestForm destructor called"<<std::endl;
}