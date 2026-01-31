/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:12:34 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/31 21:03:03 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    std::cout << "--- 1. BASIC POLYMORPHISM TESTS ---" << std::endl;
    const Animal* meta = new Animal("Animal");
    const Animal* j = new Dog("Dog");
    const Animal* i = new Cat("Cat");

    std::cout << "\nChecking types:" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << "\nChecking sounds (Should be Cat, Dog, and Animal):" << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "\nCleaning up (Check destructor order in logs):" << std::endl;
    delete meta;
    delete j;
    delete i;

    std::cout << "\n--- 2. LEAK & SCOPE TEST (Stack) ---" << std::endl;
    {
        std::cout << "Creating a Dog on the stack:" << std::endl;
        Dog stackDog("Dog");
        stackDog.makeSound();
    } // stackDog goes out of scope here

    std::cout << "\n--- 3. WRONG ANIMAL TEST (Polymorphism Failure) ---" << std::endl;
    // This tests what happens if 'virtual' is missing.
    // Even though it's a WrongCat, it will sound like a WrongAnimal 
    // because the functions are not virtual.
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\nWrongCat Type: " << wrongCat->getType() << std::endl;
    std::cout << "WrongCat Sound (Should NOT be a Meow):" << std::endl;
    wrongCat->makeSound();
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;

    return 0;
}