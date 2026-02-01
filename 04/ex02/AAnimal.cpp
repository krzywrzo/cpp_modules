/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:13:19 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/02/01 19:57:10 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal :: AAnimal()
{
	std::cout<<"Default AAnimal constructor"<<std::endl;
}

AAnimal :: AAnimal(std :: string type)
{
	std::cout<<"AAnimal default constructor called"<<std::endl;
	this->type = type;
}

AAnimal :: AAnimal(const AAnimal& other)
{
	std::cout<<"AAnimal copy constructor called"<<std::endl;
	*this = other;
}

AAnimal :: ~AAnimal()
{
	std::cout<<"AAnimal destructor called"<<std::endl;
}

std::string AAnimal::getType() const
{
    return this->type;
}