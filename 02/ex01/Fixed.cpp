/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:49:04 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/29 19:36:26 by kwrzosek         ###   ########.fr       */
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

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = n << this->fractional_bits;
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_value = roundf(n * (1 << this->fractional_bits));
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

float	Fixed:: toFloat(void) const
{
	return (float)this->fixed_point_value / (float)(1 << this->fractional_bits);
}

int	Fixed:: toInt(void) const
{
	return this->fixed_point_value >> this->fractional_bits;
}


std::ostream& operator<<(std::ostream& os, const Fixed& obj) 
{
	os << obj.toFloat();

	return os;
}