/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 12:28:46 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/24 23:33:54 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int		ScalarConverter::is_char(const std::string& num)
{
	if (num.length() == 1)
	{
	char c = num[0];
		if (c >= 32 && c <= 126 && !(c >= '0' && c <= '9'))
			return (1);
	}
	return (-1);
}

int		ScalarConverter::is_letter(const std::string& num)
{
	int	i = 0;
	if (num.empty())
		return (-1);
	if (num[i] == '+' || num[i] == '-')
		i++;
	if (num[i] == '\0')
		return (-1);
	while (num[i] != 0)
	{
		if (!((num[i] >= 'a' && num[i] <= 'z') || (num[i] >= 'A' && num[i] <= 'Z')))
			return (-1);
		i++;
	}
	return (1);
}

int		ScalarConverter::num_len(const std::string& num)
{
	int i = 0;
	while (num[i] != 0)
		i++; 
	return (i);
}
int		ScalarConverter::is_num(const std::string& num)
{
	int	i = 0;
	if (num.empty())
		return (-1);
	if (num[i] == '+' || num[i] == '-')
		i++;
	if (num[i] == '\0')
		return (-1);
	while (num[i] != 0)
	{
		if (!(num[i] >= '0' && num[i] <= '9'))
			return (-1);
		i++;
	}
	int dots = 0;
	for (size_t i = 0; i < num.length(); i++)
	{
		if (num[i] == '.')
			dots++;
	}
	if (dots > 1)
		return (-1);
	return (1);
}
int		ScalarConverter::is_dot(const std::string& num)
{
	int i = 0;
	while (num[i] != 0)
	{
		if (num[i] == '.')
			return(1);
		i++;
	}
	return(0);
}

int ScalarConverter::is_pseudo_literal(const std::string& num)
{
	if (num == "-inff" || num == "+inff" || num == "nanf" ||
		num == "-inf"  || num == "+inf"  || num == "nan" ||
		num == "inf"   || num == "inff")
	{
		return (1);
	}
	return (0);
}

void ScalarConverter::pseudo_literals_print(const std::string& num)
{
	std::string f_out;
	std::string d_out;

	if (num == "nan" || num == "nanf") 
	{
		f_out = "nanf";
		d_out = "nan";
	}
	else if (num == "+inf" || num == "+inff" || num == "inf" || num == "inff") 
	{
		f_out = "+inff";
		d_out = "+inf";
	}
	else if (num == "-inf" || num == "-inff") 
	{
		f_out = "-inff";
		d_out = "-inf";
	}

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << f_out << std::endl;
	std::cout << "double: " << d_out << std::endl;
}