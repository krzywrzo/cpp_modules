/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:25:39 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/27 16:47:29 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA :: HumanA(std::string name,Weapon& weapon) : name(name), weapon(weapon)
{

}

void	HumanA :: attack()
{
	std::cout<<name<<" attacks with their "<<this->weapon.getType()<<std::endl;
}