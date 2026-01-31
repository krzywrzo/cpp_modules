/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:13:19 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/31 20:54:55 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal :: Animal(std :: string type)
{
	std::cout<<"Animal default constructor called"<<std::endl;
	this->type = type;
}

Animal :: Animal(const Animal& other)
{
	std::cout<<"Animal copy constructor called"<<std::endl;
	*this = other;
}

Animal :: ~Animal()
{
	std::cout<<"Animal destructor called"<<std::endl;
}

void Animal :: makeSound() const
{
	std::cout<<"Generic animal voices"<<std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}