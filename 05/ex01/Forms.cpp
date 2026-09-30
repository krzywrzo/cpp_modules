/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Forms.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 15:54:30 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/08/26 19:30:53 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Forms.hpp"

Forms:: Forms (const std::string &name, const int gradeToSign, const int gradeToExecute) :
name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), isSigned(false)
{
	std::cout<<"Forms: "<<this->name<<" constructor called"<<std::endl;
		if (this->gradeToSign > 150 || this->gradeToExecute > 150)
		throw Forms::GradeTooLowException();
	if (this->gradeToExecute < 1 || this->gradeToSign < 1)
		throw Forms::GradeTooHighException();
}

Forms:: ~Forms()
{
	std::cout<<"Forms: "<<this->name<<" destructor called"<<std::endl;
}

int Forms:: getGradeToSign() const
{
	return (this->gradeToSign);
}

int Forms:: getGradeToExecute() const
{
	return (this->gradeToExecute);
}

std::string Forms:: getName() const
{
	return (this->name);
}

bool Forms:: getSign() const
{
	return (this->isSigned);
}

void Forms:: beSigned(const Bureaucrat &b1)
{
	if (b1.getGrade() > this->getGradeToSign())
		throw Forms::GradeTooLowException();
	this->isSigned = true;
}

const char* Forms :: GradeTooHighException :: what() const throw()
{
	return "Forms::GradeTooHighException";
}

const char* Forms :: GradeTooLowException :: what() const throw()
{
	return "Forms::GradeTooLowException";
}