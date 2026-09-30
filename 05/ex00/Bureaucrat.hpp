/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 12:14:09 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/08/21 15:50:07 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:
	const std::string &name;
	int grade;

	std::string	getName() const;
	int getGrade() const;
	void	incrementGrade();
	void	decrementGrade();

	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();


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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);

#endif