/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:21:15 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/27 16:47:26 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
	std:: string name;
	Weapon&	weapon;

	public:
	HumanA(std::string name,Weapon& weapon);
	void	attack();
};