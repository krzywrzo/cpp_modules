/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:12:34 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/02/01 20:01:23 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main() 
{
    AAnimal* j = new Dog();
    AAnimal* k = new Cat();
    
    j->makeSound();
    k->makeSound();
    
    delete j;
    delete k;
    
    return 0;
}