/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:24:47 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/02/01 20:00:47 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog() : AAnimal()
{
	std::cout<<"Dog default constructor called"<<std::endl;
	this->type = type;
	this->brain = new Brain();
}

Dog :: Dog(std::string type) : AAnimal(type)
{
	std::cout<<"Dog default constructor called"<<std::endl;
	this->type = type;
	this->brain = new Brain();
}
Dog :: Dog(const Dog& other) : AAnimal (other)
{
	std::cout<<"Dog copy constructor called"<<std::endl;
	this->brain = NULL;
	*this = other;
}
Dog :: ~Dog()
{	
	std::cout<<"Dog destructor called"<<std::endl;
	delete(brain);
}

void	Dog :: makeSound() const
{
	std::cout<<"Woff woff!"<<std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
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

Brain* Dog::getBrain(void) const {
    return this->brain;
}