/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:08:27 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/31 18:46:58 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap :: ScavTrap (std:: string name) : ClapTrap(name)
{
	std::cout<<"ScavTrap: "<<name<<" constructor called"<<std::endl;
	this->HitPoints = 100;
	this->AttackDamage = 20;
	this->EnergyPoints = 50;
	this->name = name;
}

ScavTrap :: ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout<<"ScavTrap copy constructor called"<<std::endl;
	*this = other;
}

void ScavTrap :: guardGate()
{
	std::cout<<"ScavTrap: "<<this->name<<" is now in gate keeping mode"<<std::endl;
}

ScavTrap :: ~ScavTrap()
{
	std::cout<<"ScavTrap destructor called"<<std::endl;
}