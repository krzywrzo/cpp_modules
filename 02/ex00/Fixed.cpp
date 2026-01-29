/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:49:04 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/29 17:59:49 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed() : fixed_point_value(0)
{
	std::cout<<"Defaul constructor called"<<std::endl;
}

Fixed :: Fixed (const Fixed& other)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout<<"Copt assignment operator called"<<std::endl;
	if (this != &other)
		this->fixed_point_value = other.getRawBits();
	return *this;
}

Fixed :: ~Fixed()
{
	std::cout<<"destructor called"<<std::endl;
}

int Fixed:: getRawBits() const
{
	std::cout<<"getRawBits function called"<<std::endl;
	return (this->fixed_point_value);
}

void	Fixed:: setRawBits(int const raw)
{
	this->fixed_point_value = raw;
}