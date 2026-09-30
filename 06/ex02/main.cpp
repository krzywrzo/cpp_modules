/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 22:10:00 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/30 22:12:59 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    // Seed the random number generator
    std::srand(static_cast<int>(std::time(NULL)));

    std::cout << "Generating 5 random objects...\n";
    std::cout << "------------------------------\n";

    for (int i = 0; i < 5; ++i) {
        Base* obj = generate();
        
        std::cout << "Test " << i + 1 << ":\n";
        
        std::cout << "  Pointer identify   : ";
        identify(obj);
        
        std::cout << "  Reference identify : ";
        identify(*obj); // Dereference the pointer to pass by reference
        
        std::cout << "------------------------------\n";
        
        // Clean up memory
        delete obj;
    }

    return 0;
}