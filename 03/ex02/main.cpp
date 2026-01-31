/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:21:55 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/31 19:06:59 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "--- 1. Testing Constructor/Destructor Order ---" << std::endl;
    {
        FragTrap frag("FR4G-TP");
        std::cout << std::endl;
    }

    std::cout << "\n--- 2. Testing Basic Attributes & Attack ---" << std::endl;
    {
        FragTrap frag("Slayer");
        ClapTrap target("Target Dummy");

        frag.attack("Target Dummy");
        target.takeDamage(30);
        
        std::cout << "\n--- 3. Testing Special Capacity ---" << std::endl;
        frag.highFivesGuys();
    }

    std::cout << "\n--- 4. Testing Energy Depletion ---" << std::endl;
    {
        FragTrap lowEnergy("TiredBot");
        for (int i = 0; i < 5; i++) {
            lowEnergy.attack("a wall");
        }
        lowEnergy.beRepaired(10);
    }

    std::cout << "\n--- 5. Testing Orthodox Canonical Form ---" << std::endl;
    {
        FragTrap a("Robot A");
        FragTrap b("Robot B");
        
        a = b;
        FragTrap c(a);
        
        c.highFivesGuys();
    }

    std::cout << "\n--- End of Tests ---" << std::endl;
    return 0;
}


// int main ()
// {
// 	// ClapTrap ct1("Grzmichuj");
// 	// ClapTrap ct2(ct1);

// 	// ScavTrap st1("Gustaw");
// 	// ScavTrap st2(st1);

// 	FragTrap ft1("Kermit");
// 	FragTrap ft2(ft1);

// 	ft1.attack("test_target");
// 	ft2.highFivesGuys();

// 	// st1.attack("test_target");
// 	// st2.guardGate();

// 	// ct2.attack("test_target");
// 	// ct2.takeDamage(3);
// 	// ct2.beRepaired(3);
// }