/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:24:47 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/31 20:55:00 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog(std::string type) : Animal(type)
{
	std::cout<<"Dog default constructor called"<<std::endl;
	this->type = type;
}
Dog :: Dog(const Dog& other) : Animal (other)
{
	std::cout<<"Dog copy constructor called"<<std::endl;
	*this = other;
}
Dog :: ~Dog()
{
	std::cout<<"Dog destructor called"<<std::endl;
}

void	Dog :: makeSound() const
{
	std::cout<<"Woff woff!"<<std::endl;
}