/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:04:37 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/26 20:15:54 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n;
	std::string name;

	std::cout<<"How many zombies do u want to create?";
	std::cin>>n;
	std::cout<<"Name: ";
	std::cin>>name;
	Zombie *horde = zombieHorde(n, name);
	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}
	delete(horde);
}