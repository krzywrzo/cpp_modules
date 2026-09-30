/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 12:13:28 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/08/26 19:32:34 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "        TEST 1: Forms CONSTRUCTORS         " << std::endl;
    
    try {
        std::cout << "Attempting to create Forms with Sign Grade 0..." << std::endl;
        Forms invalidForms1("FormsA", 0, 50);
    } catch (const std::exception& e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }

    try {
        std::cout << "\nAttempting to create Forms with Execute Grade 151..." << std::endl;
        Forms invalidForms2("FormsB", 50, 151);
    } catch (const std::exception& e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }

    std::cout << "     TEST 2: OUTPUT & EXACT MATCH SIGN    " << std::endl;
    
    try {
        Bureaucrat bob("Bob", 50);
        Forms taxForms("Tax Forms", 50, 50);

        std::cout << "Before signing:" << std::endl;
        std::cout << taxForms << std::endl;

        bob.signForm(taxForms);

        std::cout << "\nAfter signing:" << std::endl;
        std::cout << taxForms << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }

    std::cout << "     TEST 3: THE OVERACHIEVER SIGNING     " << std::endl;
    
    try {
        Bureaucrat boss("Boss", 1);
        Forms easyForms("Easy Forms", 100, 100);

        boss.signForm(easyForms); // Grade 1 trying to sign Grade 100 (Should succeed)
    } catch (const std::exception& e) {
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }

    std::cout << "     TEST 4: THE UNDERACHIEVER FAILING    " << std::endl;
    
    try {
        Bureaucrat intern("Intern", 150);
        Forms ndaForms("NDA", 10, 10);

        intern.signForm(ndaForms);
        std::cout << "\nProving Forms is still unsigned:" << std::endl;
        std::cout << ndaForms << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "This shouldn't print if signForms() catches the error properly: " << e.what() << std::endl;
    }

    return 0;
}