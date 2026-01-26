/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:41:54 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/26 20:08:32 by kwrzosek         ###   ########.fr       */
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
	Zombie();
	void	set_name(std:: string name);
	void	announce(void);
};

Zombie	*zombieHorde(int n, std::string name);

#endif