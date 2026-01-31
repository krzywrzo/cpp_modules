/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:21:55 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/31 16:29:06 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
	ClapTrap ct1("Grzmichuj");
	ClapTrap ct2(ct1);

	ScavTrap st1("Gustaw");
	ScavTrap st2(st1);

	st1.attack("test_target");
	st2.guardGate();

	ct2.attack("test_target");
	ct2.takeDamage(3);
	ct2.beRepaired(3);
}