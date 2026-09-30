/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 21:54:57 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/24 23:59:55 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>

class ScalarConverter
{
	private: 
		ScalarConverter();
		ScalarConverter(const ScalarConverter& src);
		ScalarConverter& operator =(const ScalarConverter& rhs);
		~ScalarConverter();

		static int		typeIdentifier(const std::string& num);
		static int		num_len(const std::string& num);
		static int		is_num(const std::string& num);
		static int		is_dot(const std::string& num);
		static int		is_char(const std::string& num);
		static int		is_letter(const std::string& num);
		static int		is_pseudo_literal(const std::string& num);
		static void		conv_int(const std::string& num);
		static void		conv_char(const std::string& num);
		static void		conv_dbl(const std::string& num);
		static void		conv_float(const std::string& num);
		static void		conv_pseudo();
		static void		pseudo_literals_print(const std::string& num);

	public:
		static void	convert(const std::string& num);
};

#endif