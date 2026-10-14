/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 10:09:17 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/10/13 09:24:30 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <stdexcept>
#include "Span.hpp"

int main()
{
	// --- Test 1: Basic Subject Test ---
	std::cout << "=== Test 1: Basic Subject Test ===" << std::endl;
	try
	{
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}


	// --- Test 2: Capacity Overflow Exception ---
	std::cout << "\n=== Test 2: Capacity Overflow ===" << std::endl;
	try
	{
		Span sp(2);
		sp.addNumber(10);
		sp.addNumber(20);
		
		std::cout << "Trying to add a 3rd number to a Span of capacity 2..." << std::endl;
		sp.addNumber(30);
	}
	catch (const std::exception& e)
	{
		std::cout << "Successfully caught expected exception: " << e.what() << std::endl;
	}


	// --- Test 3: Not Enough Elements Exception ---
	std::cout << "\n=== Test 3: Not Enough Elements ===" << std::endl;
	try
	{
		Span sp(5);
		sp.addNumber(42);
		
		std::cout << "Trying to find shortest span with only 1 element..." << std::endl;
		sp.shortestSpan();
	}
	catch (const std::exception& e)
	{
		std::cout << "Successfully caught expected exception: " << e.what() << std::endl;
	}


	// --- Test 4: Large Scale Test (15,000 numbers) ---
	std::cout << "\n=== Test 4: Large Scale Test (15,000 numbers) ===" << std::endl;
	try
	{
		unsigned int largeSize = 15000;
		Span sp(largeSize);

		for (unsigned int i = 0; i < largeSize; ++i)
		{
			sp.addNumber(i * 2);
		}

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}


	// --- Test 5: Copy Constructor & Assignment Operator ---
	std::cout << "\n=== Test 5: Copied Span Integrity ===" << std::endl;
	try
	{
		Span original(3);
		original.addNumber(5);
		original.addNumber(10);
		original.addNumber(15);

		Span copy(original);
		std::cout << "Copy shortest span: " << copy.shortestSpan() << std::endl;
		std::cout << "Copy longest span: " << copy.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}