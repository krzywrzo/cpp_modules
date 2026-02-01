/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 21:19:35 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/02/01 19:11:20 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain :: Brain()
{
	std::cout<<"Brain default called"<<std::endl;
}

Brain :: Brain (const Brain& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

Brain :: ~Brain () 
{
	std::cout<<"Brain destructor called"<<std::endl;
}

void Brain::setIdea(int i, std::string idea) {
    if (i >= 0 && i < 100)
        this->ideas[i] = idea;
}

std::string Brain::getIdea(int i) const {
    if (i >= 0 && i < 100)
        return this->ideas[i];
    return "";
}