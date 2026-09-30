/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 11:54:21 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/02 17:49:06 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

int main()
{
    std::cout << "==========================================" << std::endl;
    std::cout << "     TEST 1: ShrubberyCreationForm     " << std::endl;
    std::cout << "==========================================" << std::endl;
    try {
        Bureaucrat boss("Boss", 1);
        ShrubberyCreationForm form1("Backyard");
        
        boss.executeForm(form1); 
    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << '\n';
    }

    std::cout << "\n==========================================" << std::endl;
    std::cout << "     TEST 2: GRADE TOO LOW TO EXECUTE     " << std::endl;
    std::cout << "==========================================" << std::endl;
    try {
        // Shrubbery requires: Sign 145, Execute 137.
        // Intern grade is 140. He CAN sign it, but CANNOT execute it.
        Bureaucrat intern("Intern", 140); 
        ShrubberyCreationForm form2("Garden");
        
        intern.signForm(form2);    // This should succeed
        intern.executeForm(form2); // This should fail!
    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << '\n';
    }

    std::cout << "\n==========================================" << std::endl;
    std::cout << "     TEST 3: SUCCESSFUL EXECUTION         " << std::endl;
    std::cout << "==========================================" << std::endl;
    try {
        Bureaucrat manager("Manager", 130); // Grade 130 can do both
        ShrubberyCreationForm form3("Forest");
        
        manager.signForm(form3);
        manager.executeForm(form3); // Should succeed and create "Forest_shrubbery"
    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << '\n';
    }


std::cout << "\n==========================================" << std::endl;
    std::cout << "  TEST 1: PRESIDENTIAL - UNSIGNED FORM    " << std::endl;
    std::cout << "==========================================" << std::endl;
    try {
        Bureaucrat emperor("Emperor", 1);
        PresidentialPardonForm pardon1("Arthur Dent");
        
        // Try to execute without signing
        emperor.executeForm(pardon1); 
    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << '\n';
    }

    std::cout << "\n==========================================" << std::endl;
    std::cout << "  TEST 2: PRESIDENTIAL - GRADE TOO LOW    " << std::endl;
    std::cout << "==========================================" << std::endl;
    try {
        // Governor is grade 20. 
        // Can sign (requires 25). CANNOT execute (requires 5).
        Bureaucrat governor("Governor", 20); 
        PresidentialPardonForm pardon2("Ford Prefect");
        
        governor.signForm(pardon2);
        governor.executeForm(pardon2); // This should fail!
    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << '\n';
    }

    std::cout << "\n==========================================" << std::endl;
    std::cout << "  TEST 3: PRESIDENTIAL - SUCCESS          " << std::endl;
    std::cout << "==========================================" << std::endl;
    try {
        Bureaucrat president("President", 5); // Exactly grade 5
        PresidentialPardonForm pardon3("Zaphod's Cousin");
        
        president.signForm(pardon3);
        president.executeForm(pardon3); // Should succeed!
    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << '\n';
    }

	std::cout << "\n==========================================" << std::endl;
    std::cout << "  TEST 1: ROBOTOMY - UNSIGNED FORM        " << std::endl;
    std::cout << "==========================================" << std::endl;
    try {
        Bureaucrat boss("Boss", 1);
        RobotomyRequestForm form1("Bender");
        
        // Try to execute without signing
        boss.executeForm(form1); 
    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << '\n';
    }

    std::cout << "\n==========================================" << std::endl;
    std::cout << "  TEST 2: ROBOTOMY - GRADE TOO LOW        " << std::endl;
    std::cout << "==========================================" << std::endl;
    try {
        // Robotomy requires: Sign 72, Execute 45.
        // Middle Manager is grade 50. Can sign, but CANNOT execute.
        Bureaucrat midManager("Middle Manager", 50); 
        RobotomyRequestForm form2("Wall-E");
        
        midManager.signForm(form2);
        midManager.executeForm(form2); // This should fail!
    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << '\n';
    }

    std::cout << "\n==========================================" << std::endl;
    std::cout << "  TEST 3: ROBOTOMY - 50% RANDOMNESS       " << std::endl;
    std::cout << "==========================================" << std::endl;
    try {
        Bureaucrat boss("Boss", 1); 
        RobotomyRequestForm form3("R2-D2");
        
        boss.signForm(form3);
        
        // Execute the form 4 times to demonstrate the 50/50 chance
        for (int i = 0; i < 4; i++) {
            std::cout << "\n--- Execution attempt " << (i + 1) << " ---" << std::endl;
            boss.executeForm(form3); 
        }
    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << '\n';
    }
	
    return 0;
}