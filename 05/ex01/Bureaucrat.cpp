/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 12:21:17 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/08/24 17:20:50 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat:: Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	std::cout<<"Bureaucrat " <<this->name<<" constructor called"<<std::endl;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

const char* Bureaucrat :: GradeTooHighException :: what() const throw()
{
	return "Bureaucrat::GradeTooHighException";
}

const char* Bureaucrat :: GradeTooLowException :: what() const throw()
{
	return "Bureaucrat::GradeTooLowException";
}

std::string Bureaucrat:: getName() const
{
	return (this->name);
}

int Bureaucrat:: getGrade() const
{
	return(this->grade);
}

Bureaucrat:: ~Bureaucrat()
{
	std::cout<<"Buraucrat destructor called"<<std::endl;
}


void	Bureaucrat:: incrementGrade()
{
	this->grade--;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat:: decrementGrade()
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat:: signForm(Forms &form)
{
	try
	{
		form.beSigned(*this);
		std::cout<<this->name<< " signed "<<form.getName()<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout<<this->getName()<<" couldnt sign "<<form.getName()<<" because "<<e.what()<<std::endl;
	}
	
}