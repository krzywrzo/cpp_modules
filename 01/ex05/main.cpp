/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:44:48 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/29 14:58:59 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "--- Testing DEBUG ---" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\n--- Testing INFO ---" << std::endl;
	harl.complain("INFO");

	std::cout << "\n--- Testing WARNING ---" << std::endl;
	harl.complain("WARNING");

	std::cout << "\n--- Testing ERROR ---" << std::endl;
	harl.complain("ERROR");

	std::cout << "\n--- Testing INVALID ---" << std::endl;
	harl.complain("UNKNOWN");

	return 0;
}