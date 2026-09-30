/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overloads.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 15:55:23 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/08/26 19:31:28 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Forms.hpp"

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs)
{
	os << rhs.getName() << ", bureaucrat grade "<< rhs.getGrade() << ".";
	return os;
}

std::ostream& operator<<(std::ostream& os, const Forms& rhs)
{
    os << rhs.getName() << ", form's grade to sign " << rhs.getGradeToSign() 
       << ", form's grade to execute " << rhs.getGradeToExecute() 
       << ". Signed status: " << (rhs.getSign() ? "Yes" : "No");
    return os;
}