/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:41:54 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/26 18:58:03 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <stdio.h>
# include <iomanip>

class Zombie
{
	private:
	std:: string name;

	public:
	Zombie(std::string name);
	void	announce(void);
};

	Zombie*	newZombie(std::string name);
	void	randomChump(std::string name);

#endif