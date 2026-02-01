/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:13:31 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/02/01 19:59:05 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	protected:
	std::string type;
	
	public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal& other);
	virtual ~AAnimal();
	
	virtual void	makeSound() const = 0;
	virtual std::string getType() const;
};

#endif