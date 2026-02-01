/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:17:51 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/02/01 20:00:22 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : virtual public AAnimal
{
	public: 
	Cat();
	Cat(std::string type);
	Cat(const Cat& other);
	~Cat();

	void	makeSound() const;
	Cat& operator=(const Cat& rhs);
	Brain* getBrain(void) const;
	private:
	Brain	*brain;
};

#endif