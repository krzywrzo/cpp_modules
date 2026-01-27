/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:32:14 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/27 16:20:03 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std:: string type)
{
	this->type = type;
}

const std:: string& Weapon:: getType()
{
	return(this->type);
}

void	Weapon:: setType(std:: string newType)
{
	this->type = newType;
}
