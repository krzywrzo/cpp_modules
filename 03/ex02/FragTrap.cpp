/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:07:27 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/31 19:05:41 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap :: FragTrap(std:: string name) : ClapTrap(name)
{
	std::cout<<"FragTrap: "<<name<<" contructor called"<<std::endl;
	this->HitPoints = 100;
	this->AttackDamage = 30;
	this->EnergyPoints = 100;
	this->name = name;
}

FragTrap :: FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout<<"FragTrap copy constructor called"<<std::endl;
	*this = other;
}
FragTrap :: ~FragTrap()
{
	std::cout<<"FragTrap destructor called"<<std::endl;
}

void FragTrap :: highFivesGuys(void)
{
	std::cout<<"FragTrap: "<<this->name<<" requested high five"<<std::endl;
}