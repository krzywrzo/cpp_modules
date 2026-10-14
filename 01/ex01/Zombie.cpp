/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:41:56 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/02/07 18:22:40 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::Zombie() 
{
    // Optional: You can give a default name for debugging
    this->name = "(Unnamed)"; 
}
void Zombie :: set_name(std:: string name)
{
	this->name = name;
}

void Zombie :: announce()
{
	std::cout<<this->name<<": "<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie :: ~Zombie()
{
	std::cout<<"destructor";
}