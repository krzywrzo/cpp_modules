/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:29:35 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/27 16:44:13 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	private:
	std:: string	name;
	Weapon*	weapon;

	public:
	HumanB(std::string name);
	void	setWeapon(Weapon& newWeapon);
	void	attack();
};