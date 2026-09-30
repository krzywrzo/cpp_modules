/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 22:00:41 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/24 23:54:49 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int ScalarConverter::typeIdentifier(const std::string& num)
{
	if (num.empty())
		return (-1);

	if (num.length() == 1 && !std::isdigit(num[0]) && num[0] >= 32 && num[0] <= 126)
		return (1);

	int dot_count = 0;
	int f_count = 0;
	
	for (size_t i = 0; i < num.length(); i++)
	{
		if (num[i] == '-' || num[i] == '+')
		{
			if (i != 0) 
				return (-1);
		}
		else if (num[i] == '.')
		{
			dot_count++;
		}
		else if (num[i] == 'f')
		{
			f_count++;
			if (i != num.length() - 1) 
				return (-1);
		}
		else if (!std::isdigit(num[i]))
		{
			return (-1);
		}
	}

	if (dot_count > 1 || f_count > 1)
		return (-1);
	if (f_count == 1)
		return (3);
	if (dot_count == 1)
		return (4);
	return (2);
}

void	ScalarConverter::conv_char(const std::string& num)
{
	char	base_char = num[0];

	int out_int = static_cast<int>(base_char);
	float out_float = static_cast<float>(base_char);
	double out_double = static_cast<double>(base_char);

	std::cout<<"char: '"<<base_char<<"'"<<std::endl;
	std::cout<<"int: "<<out_int<< std::endl;
	std::cout<<"float: "<<out_float<<".0f"<<std::endl;
	std::cout<<"double: "<<out_double<<".0"<<std::endl;
}

void ScalarConverter::conv_int(const std::string& num)
{
	errno = 0;
	double val = std::strtod(num.c_str(), NULL);

	if (errno == ERANGE)
	{
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
		return;
	}

	if (val < 0 || val > 255 || val != val)
		std::cout << "char: impossible" << std::endl;
	else if (val >= 32 && val <= 126)
		std::cout << "char: '" << static_cast<char>(val) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	if (val < std::numeric_limits<int>::min() || val > std::numeric_limits<int>::max() || val != val)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(val) << std::endl;

	if (val < -std::numeric_limits<float>::max() || val > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
	{
		float float_out = static_cast<float>(val);
		if (float_out == std::floor(float_out) && float_out < 1e6 && float_out > -1e6)
			std::cout << "float: " << float_out << ".0f" << std::endl;
		else
			std::cout << "float: " << float_out << "f" << std::endl;
	}

	if (val == std::floor(val) && val < 1e6 && val > -1e6)
		std::cout << "double: " << val << ".0" << std::endl;
	else
		std::cout << "double: " << val << std::endl;
}

void ScalarConverter::conv_float(const std::string& num)
{
	errno = 0;
	double val = std::strtod(num.c_str(), NULL);

	if (errno == ERANGE)
	{
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
		return;
	}

	if (val < 0 || val > 255 || val != val)
		std::cout << "char: impossible" << std::endl;
	else if (val >= 32 && val <= 126)
		std::cout << "char: '" << static_cast<char>(val) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	if (val < std::numeric_limits<int>::min() || val > std::numeric_limits<int>::max() || val != val)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(val) << std::endl;

	if (val < -std::numeric_limits<float>::max() || val > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
	{
		float float_out = static_cast<float>(val);
		if (float_out == std::floor(float_out) && float_out < 1e6 && float_out > -1e6)
			std::cout << "float: " << float_out << ".0f" << std::endl;
		else
			std::cout << "float: " << float_out << "f" << std::endl;
	}

	if (val == std::floor(val) && val < 1e6 && val > -1e6)
		std::cout << "double: " << val << ".0" << std::endl;
	else
		std::cout << "double: " << val << std::endl;
}

void	ScalarConverter::conv_dbl(const std::string& num)
{
	errno = 0;
	double val = std::strtod(num.c_str(), NULL);

	if (errno == ERANGE)
	{
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
		return;
	}

	if (val < 0 || val > 255 || val != val)
		std::cout << "char: impossible" << std::endl;
	else if (val >= 32 && val <= 126)
		std::cout << "char: '" << static_cast<char>(val) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	if (val < std::numeric_limits<int>::min() || val > std::numeric_limits<int>::max() || val != val)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(val) << std::endl;

	if (val < -std::numeric_limits<float>::max() || val > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
	{
		float float_out = static_cast<float>(val);
		if (float_out == std::floor(float_out) && float_out < 1e6 && float_out > -1e6)
			std::cout << "float: " << float_out << ".0f" << std::endl;
		else
			std::cout << "float: " << float_out << "f" << std::endl;
	}

	if (val == std::floor(val) && val < 1e6 && val > -1e6)
		std::cout << "double: " << val << ".0" << std::endl;
	else
		std::cout << "double: " << val << std::endl;
}
