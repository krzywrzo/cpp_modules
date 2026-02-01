/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:18:21 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/02/01 19:02:28 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
	public:
	Dog();
	Dog(std::string type);
	Dog(const Dog& other);
	~Dog();
	
	void	makeSound() const;
	Dog& operator=(const Dog& rhs);
	Brain* getBrain(void) const;
	private: 
	Brain	*brain;
};

#endif