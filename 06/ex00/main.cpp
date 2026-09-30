/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 12:39:06 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/25 00:00:07 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void runTest(const std::string& testName, const std::string& input)
{
    std::cout << "\n\033[34m--- Test: " << testName << " | Input: \"" << input << "\" ---\033[0m" << std::endl;
    ScalarConverter::convert(input);
}

int main(void)
{
	std::cout<<"is it recompiling?"<<std::endl;
    // 1. Char Tests
    runTest("Basic Char", "c");
    runTest("Symbol Char", "*");
    runTest("Space Char", " ");

    // 2. Int Tests
    runTest("Basic Zero", "0");
    runTest("Basic Positive Int", "42");
    runTest("Basic Negative Int", "-42");
    runTest("Max Int Boundary", "2147483647");
    runTest("Min Int Boundary", "-2147483648");

    // 3. Float Tests
    runTest("Basic Float (Fraction)", "4.2f");
    runTest("Basic Float (Negative)", "-4.2f");
    runTest("Float Whole Number (.0f requirement)", "42.0f");
    runTest("Float Whole Number Zero", "0.0f");

    // 4. Double Tests
    runTest("Basic Double (Fraction)", "4.2");
    runTest("Basic Double (Negative)", "-4.2");
    runTest("Double Whole Number (.0 requirement)", "42.0");
    runTest("Double Whole Number Zero", "0.0");

    // 5. Overflow & Boundary Tests
    runTest("Int Overflow (Valid Double/Float)", "2147483649");
    runTest("Int Underflow (Valid Double/Float)", "-2147483649");
    // 1e300 fits in double, but completely overflows float and int
    runTest("Float Overflow (Valid Double)", "1e300"); 

    // 6. Pseudo-literals
    runTest("Double NaN", "nan");
    runTest("Float NaN", "nanf");
    runTest("Double +Inf", "+inf");
    runTest("Float -Inf", "-inff");
    runTest("Double Inf (no sign)", "inf");

    // 7. Invalid Inputs (Should print impossible for everything)
    runTest("Random String", "hello_world");
    runTest("Empty String", "");
    runTest("Multiple Dots", "42.42.42");
    runTest("Misplaced 'f'", "42f42");

    std::cout << "\n\033[32m--- End of Tests ---\033[0m\n" << std::endl;
    
    return (0);
}