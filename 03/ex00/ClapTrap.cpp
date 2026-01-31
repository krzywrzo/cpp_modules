/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:26:46 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/29 21:06:03 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap :: ClapTrap (std:: string name)
{
	std::cout<<"Default constructor called"<<std::endl;
	this->name = name;
	this->AttackDamage = 0;
	this->EnergyPoints = 10;
	this->HitPoints = 10;
}

ClapTrap :: ClapTrap(const ClapTrap& other)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = other;
}
ClapTrap :: ~ClapTrap()
{
	std::cout<<"Destructor called"<<std::endl;
}

void	ClapTrap :: attack(const std:: string &target)
{
	std::cout<<"ClapTrap "<<this->name<<" attacks "<<target<<", causing "<<this->AttackDamage<<" points of damage!"<<std::endl;	
}

void	ClapTrap:: takeDamage(unsigned int amount)
{
	std::cout<<"ClapTrap "<<this->name<<" took "<<amount<<" points of damage"<<std::endl;	
}

void	ClapTrap:: beRepaired(unsigned int amount)
{
	std::cout<<"ClapTrap "<<this->name<<" repaired itself with "<<amount<<" points"<<std::endl;	
}