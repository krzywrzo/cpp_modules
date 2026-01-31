/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:28:30 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/31 20:55:05 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat(std::string type) : Animal(type)
{
	std::cout<<"Cat default constructor called"<<std::endl;
	this->type = type;
}
Cat :: Cat(const Cat& other) : Animal (other)
{
	std::cout<<"Cat copy constructor called"<<std::endl;
	*this = other;
}
Cat :: ~Cat()
{
	std::cout<<"Cat destructor called"<<std::endl;
}

void	Cat :: makeSound() const
{
	std::cout<<"Meow meow!"<<std::endl;
}