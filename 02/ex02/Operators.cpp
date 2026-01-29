/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:48:08 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/29 20:17:52 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool Fixed::operator>(const Fixed& other) const {
    return this->fixed_point_value > other.fixed_point_value;
}

bool Fixed::operator<(const Fixed& other) const {
    return this->fixed_point_value < other.fixed_point_value;
}

bool Fixed::operator>=(const Fixed& other) const {
    return this->fixed_point_value >= other.fixed_point_value;
}

bool Fixed::operator<=(const Fixed& other) const {
    return this->fixed_point_value <= other.fixed_point_value;
}

bool Fixed::operator==(const Fixed& other) const {
    return this->fixed_point_value == other.fixed_point_value;
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->fixed_point_value != other.fixed_point_value;
}

Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->fixed_point_value + other.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->fixed_point_value - other.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    
    long temp = (long)this->fixed_point_value * (long)other.getRawBits();
    result.setRawBits(temp >> fractional_bits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;
    
    long temp = (long)this->fixed_point_value << fractional_bits;
    result.setRawBits(temp / other.getRawBits());
    return result;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout<<"Copt assignment operator called"<<std::endl;
	if (this != &other)
		this->fixed_point_value = other.getRawBits();
	return *this;
}

Fixed& Fixed::operator++() {
    this->fixed_point_value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    this->fixed_point_value++;
    return temp;
}


Fixed& Fixed::operator--() {
    this->fixed_point_value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    this->fixed_point_value--;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}