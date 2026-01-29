/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:34:09 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/29 14:58:06 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl:: complain(std::string level)
{
	std:: string levels[4] = {"DEBUG", "WARNING", "INFO", "ERROR"};

	void (Harl::*ptr[])(void) =	{
		&Harl::debug,
		&Harl::warning,
		&Harl::info,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*ptr[i])();
			return;
		}
	}
}
void	Harl:: debug(void)
{
	std::cout<<"DEBUG"<<std::endl;
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<<std::endl;
}

void	Harl:: warning(void)
{
	std::cout<<"WARNING"<<std::endl;
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."<<std::endl;
}

void	Harl:: info(void)
{
	std::cout<<"INFO"<<std::endl;
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void	Harl:: error(void)
{
	std::cout<<"ERROR"<<std::endl;
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}