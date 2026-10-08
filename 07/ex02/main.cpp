/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 20:23:58 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/10/07 20:25:13 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	std::cout << "--- 1. Testing Default Constructor ---" << std::endl;
	Array<int> emptyArray;
	std::cout << "Empty array size: " << emptyArray.size() << std::endl;
	try {
		emptyArray[0] = 42;
	} catch (const std::exception& e) {
		std::cout << "Exception caught successfully: " << e.what() << std::endl;
	}

	std::cout << "\n--- 2. Testing Parameterized Constructor ---" << std::endl;
	Array<int> intArray(5);
	std::cout << "intArray size: " << intArray.size() << std::endl;
	for (unsigned int i = 0; i < intArray.size(); i++) {
		// Output should be 0 because of the default initialization new T[n]()
		std::cout << "intArray[" << i << "] (default) = " << intArray[i] << std::endl; 
		intArray[i] = (i + 1) * 10; // Assigning new values
	}

	std::cout << "\n--- 3. Testing Copy Constructor (Deep Copy) ---" << std::endl;
	Array<int> copyArray(intArray);
	std::cout << "copyArray size: " << copyArray.size() << std::endl;
	copyArray[0] = 999; // Modify copy
	std::cout << "copyArray[0] changed to: " << copyArray[0] << std::endl;
	std::cout << "intArray[0] remained: " << intArray[0] << " (Proves deep copy)" << std::endl;

	std::cout << "\n--- 4. Testing Assignment Operator (Deep Copy) ---" << std::endl;
	Array<int> assignedArray;
	assignedArray = intArray;
	std::cout << "assignedArray size: " << assignedArray.size() << std::endl;
	assignedArray[0] = 777; // Modify assigned
	std::cout << "assignedArray[0] changed to: " << assignedArray[0] << std::endl;
	std::cout << "intArray[0] remained: " << intArray[0] << " (Proves deep copy)" << std::endl;

	std::cout << "\n--- 5. Testing Array with std::string ---" << std::endl;
	Array<std::string> strArray(3);
	strArray[0] = "Hello";
	strArray[1] = "Template";
	strArray[2] = "World";
	for (unsigned int i = 0; i < strArray.size(); i++) {
		std::cout << "strArray[" << i << "] = " << strArray[i] << std::endl;
	}

	std::cout << "\n--- 6. Testing Out of Bounds Exception ---" << std::endl;
	try {
		std::cout << "Attempting to access index 5 on a 5-element array..." << std::endl;
		std::cout << intArray[5] << std::endl; // Max valid index is 4
	} catch (const std::exception& e) {
		std::cout << "Exception caught successfully: " << e.what() << std::endl;
	}
	
	try {
		std::cout << "Attempting to access index -1..." << std::endl;
		std::cout << intArray[-1] << std::endl; // Underflow will convert to large unsigned int
	} catch (const std::exception& e) {
		std::cout << "Exception caught successfully: " << e.what() << std::endl;
	}

	std::cout << "\nAll tests completed. No segfaults!" << std::endl;
	return 0;
}