/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 12:21:17 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/08/21 15:53:16 by kwrzosek         ###   ########.fr       */
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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs)
{
	os << rhs.getName() << ", bureaucrat grade "<< rhs.getGrade() << ".";
	return os;
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