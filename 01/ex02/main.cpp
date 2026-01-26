/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 20:13:49 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/26 20:15:27 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() 
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "--- Memory Addresses ---" << std::endl;
	std::cout << "Address of string variable: " << &str << std::endl;
	std::cout << "Address held by stringPTR:  " << stringPTR << std::endl;
	std::cout << "Address held by stringREF:  " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "--- Values ---" << std::endl;
	std::cout << "Value of string variable: " << str << std::endl;
	std::cout << "Value pointed to by PTR:  " << *stringPTR << std::endl;
	std::cout << "Value pointed to by REF:  " << stringREF << std::endl;

	return 0;
}