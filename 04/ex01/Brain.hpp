/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 21:19:11 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/02/01 19:19:05 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Brain
{
	public: 
	std:: string ideas[100];

	Brain();
	Brain(const Brain& other);
	~Brain();

	void setIdea(int i, std::string idea);
	std::string getIdea(int i) const;
};

#endif