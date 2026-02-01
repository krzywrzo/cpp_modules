/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:28:30 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/02/01 20:00:10 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat() : AAnimal()
{
	std::cout<<"Cat default constructor called"<<std::endl;
	this->type = type;
	this->brain = new Brain();
}

Cat :: Cat(std::string type) : AAnimal(type)
{
	std::cout<<"Cat default constructor called"<<std::endl;
	this->type = type;
	this->brain = new Brain();
}
Cat :: Cat(const Cat& other) : AAnimal (other)
{
	std::cout<<"Cat copy constructor called"<<std::endl;
	this->brain = new Brain();
	*this = other;
}
Cat :: ~Cat()
{
	std::cout<<"Cat destructor called"<<std::endl;
	delete(brain);
}

void	Cat :: makeSound() const
{
	std::cout<<"Meow meow!"<<std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &rhs) 
    {
        this->type = rhs.type;
        delete this->brain;
        this->brain = NULL;

        if (rhs.brain)
            this->brain = new Brain(*rhs.brain);
    }
    return *this;
}

Brain* Cat::getBrain(void) const {
    return this->brain;
}