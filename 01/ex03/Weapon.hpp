/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 20:25:02 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/27 15:34:42 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>


class Weapon{

	private:
	std::string type;

	public:
	Weapon(std:: string type);
	const std:: string& getType();
	void	setType(std:: string newType); 
};

#endif