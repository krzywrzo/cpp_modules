/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:41:56 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/26 19:01:53 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie (std:: string name)
{
	this->name = name;
}

void Zombie :: announce()
{
	std::cout<<this->name<<": "<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}