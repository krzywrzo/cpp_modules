/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 11:54:21 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/02 21:02:46 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // Seed for the Robotomy randomness
    srand(time(NULL));

    std::cout << "==========================================" << std::endl;
    std::cout << "        TESTING INTERN FORM CREATION      " << std::endl;
    std::cout << "==========================================" << std::endl;

    Intern someRandomIntern;
    Bureaucrat boss("Boss", 1); // Grade 1 can sign and execute everything

    AForm* rrf = NULL;
    AForm* scf = NULL;
    AForm* ppf = NULL;
    AForm* unknown = NULL;

    std::cout << "\n--- 1. Testing RobotomyRequestForm ---" << std::endl;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf)
    {
        boss.signForm(*rrf);
        boss.executeForm(*rrf);
        delete rrf; // ⚠️ Don't forget to free the memory!
    }

    std::cout << "\n--- 2. Testing ShrubberyCreationForm ---" << std::endl;
    scf = someRandomIntern.makeForm("shrubbery tree", "Garden");
    if (scf)
    {
        boss.signForm(*scf);
        boss.executeForm(*scf);
        delete scf; 
    }

    std::cout << "\n--- 3. Testing PresidentialPardonForm ---" << std::endl;
    ppf = someRandomIntern.makeForm("presidential pardon", "Ford Prefect");
    if (ppf)
    {
        boss.signForm(*ppf);
        boss.executeForm(*ppf);
        delete ppf;
    }

    std::cout << "\n--- 4. Testing Invalid Form ---" << std::endl;
    unknown = someRandomIntern.makeForm("time travel request", "Marty McFly");
    if (unknown)
    {
        // This block shouldn't execute because it should return NULL
        boss.signForm(*unknown);
        boss.executeForm(*unknown);
        delete unknown;
    }

    std::cout << "\n==========================================" << std::endl;
    std::cout << "              TESTS COMPLETE              " << std::endl;
    std::cout << "==========================================" << std::endl;

    return 0;
}