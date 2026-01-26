/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:29:06 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/26 20:10:11 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std:: string name)
{
	Zombie* horde = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		horde[i].set_name(name);
	}
	return horde;
}