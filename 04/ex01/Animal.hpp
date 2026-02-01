/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:13:31 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/02/01 18:15:13 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
	std::string type;
	
	public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& other);
	virtual ~Animal();
	
	virtual void	makeSound() const;
	std::string getType() const;
};

#endif