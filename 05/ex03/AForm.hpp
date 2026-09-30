/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 19:58:50 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/02 21:01:34 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

# include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
	const std::string name;
	int const gradeToSign;
	int const gradeToExecute;
	bool isSigned;

	public:
	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	bool getSign() const;
	virtual void beSigned(const Bureaucrat &b1);
	void checkRequirements(Bureaucrat const &exec) const;
	
	virtual void execute(Bureaucrat const & executor) const = 0;
	
	AForm(const std::string &name, const int gradeToSign, const int gradeToExecute);
	virtual ~AForm();
	
	// exceptions
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	
	class FormIsNotSignedException : public std::exception 
	{
		public:
			virtual const char *what() const throw();
	};

};

std::ostream& operator<<(std::ostream& os, const AForm& rhs);


#endif