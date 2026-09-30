/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 11:07:46 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/01 12:42:47 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char* AForm :: FormIsNotSignedException :: what() const throw()
{
	return "AForm::FormIsNotSignedException";
}

void AForm:: checkRequirements(Bureaucrat const &exec) const
{
	if (this->getSign() == false)
		throw AForm::FormIsNotSignedException();
	if (exec.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
}

AForm:: AForm (const std::string &name, const int gradeToSign, const int gradeToExecute) :
name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), isSigned(false)
{
	std::cout<<"AForm: "<<this->name<<" constructor called"<<std::endl;
		if (this->gradeToSign > 150 || this->gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	if (this->gradeToExecute < 1 || this->gradeToSign < 1)
		throw AForm::GradeTooHighException();
}

AForm:: ~AForm()
{
	std::cout<<"AForm: "<<this->name<<" destructor called"<<std::endl;
}

int AForm:: getGradeToSign() const
{
	return (this->gradeToSign);
}

int AForm:: getGradeToExecute() const
{
	return (this->gradeToExecute);
}

std::string AForm:: getName() const
{
	return (this->name);
}

bool AForm:: getSign() const
{
	return (this->isSigned);
}

void AForm:: beSigned(const Bureaucrat &b1)
{
	if (b1.getGrade() > this->getGradeToSign())
		throw AForm::GradeTooLowException();
	this->isSigned = true;
}

const char* AForm :: GradeTooHighException :: what() const throw()
{
	return "AForm::GradeTooHighException";
}

const char* AForm :: GradeTooLowException :: what() const throw()
{
	return "AForm::GradeTooLowException";
}