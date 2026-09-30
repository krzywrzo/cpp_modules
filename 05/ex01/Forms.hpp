/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Forms.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 15:54:18 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/08/26 19:30:55 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMS_HPP
#define FORMS_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Forms
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
	void beSigned(const Bureaucrat &b1);

	Forms(const std::string &name, const int gradeToSign, const int gradeToExecute);
	~Forms();
	
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

};

std::ostream& operator<<(std::ostream& os, const Forms& rhs);

#endif