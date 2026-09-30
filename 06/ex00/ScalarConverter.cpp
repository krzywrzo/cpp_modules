/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 22:24:55 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/25 00:00:01 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& num)
{
	if (is_pseudo_literal(num) == 1)
	{
		pseudo_literals_print(num);
		return;
	}
	
	switch (typeIdentifier(num))
	{
	case 1:
		conv_char(num);
		break;
	case 2:
		conv_int(num);
		break;
	case 3:
		conv_float(num);
		break;
	case 4:
		conv_dbl(num);
		break;
	default:
		std::cout<<"char: impossible"<<std::endl;
		std::cout<<"int: impossible"<<std::endl;
		std::cout<<"float: impossible"<<std::endl;
		std::cout<<"double: impossible"<<std::endl;
		break;
	}
}

// return cheatsheet
// 1 - char
// 2 - int
// 3 - float
// 4 - double
// 5 - pseudo-literals