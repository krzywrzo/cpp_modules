/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:12:34 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/02/01 19:13:07 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    std::cout << "--- 1. CREATING ANIMAL ARRAY ---" << std::endl;
    const int count = 10;
    Animal* animals[count];

    for (int i = 0; i < count; i++) {
        if (i < count / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n--- 2. DELETING ANIMAL ARRAY ---" << std::endl;
    for (int i = 0; i < count; i++)
        delete animals[i];

    std::cout << "\n--- 3. TESTING DEEP COPY (Assignment) ---" << std::endl;
    Dog medor;
    medor.getBrain()->setIdea(0, "I love bones");
    
    Dog copy;
    copy = medor;

    std::cout << "Medor's idea 0: " << medor.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy's idea 0: " << copy.getBrain()->getIdea(0) << std::endl;

    std::cout << "\nModifying Medor's brain..." << std::endl;
    medor.getBrain()->setIdea(0, "I love CATS now!");

    std::cout << "Medor's idea 0: " << medor.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy's idea 0: " << copy.getBrain()->getIdea(0) << " (Should still be bones!)" << std::endl;

    std::cout << "\n--- 4. SCOPE TEST (Copy Constructor) ---" << std::endl;
    {
        Dog tmp = medor;
        std::cout << "Tmp dog created in scope" << std::endl;
    }

    std::cout << "Medor is still alive. Checking his brain: " << medor.getBrain()->getIdea(0) << std::endl;

    return 0;
}