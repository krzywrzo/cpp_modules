/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:46:33 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/27 16:47:54 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    // --- TEST 1: HumanA ---
    {
        Weapon club = Weapon("crude spiked club");
        
        // HumanA is born with the weapon
        HumanA bob("Bozydar", club);
        bob.attack();
        
        // Changing the weapon object updates Bob automatically
        club.setType("some other type of club");
        bob.attack();
    } // End of scope

    // --- TEST 2: HumanB ---
    {
        Weapon club = Weapon("crude spiked club");
        
        // HumanB is born unarmed
        HumanB jim("Pierdzislaw");
        
        // We explicitly give him the weapon
        jim.setWeapon(club);
        jim.attack();
        
        // Changing the weapon object updates Jim automatically
        club.setType("some other type of club");
        jim.attack();
    } // End of scope

    return 0;
}