/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:10:59 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/29 19:21:39 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main() {
	Data originalData;
	originalData.id = 42;
	originalData.name = "Hello C++98";
	originalData.value = 3.14f;

	std::cout << "--- Original Data ---" << std::endl;
	std::cout << "Address: " << &originalData << std::endl;
	std::cout << "ID:      " << originalData.id << std::endl;
	std::cout << "Name:    " << originalData.name << std::endl;
	std::cout << "Value:   " << originalData.value << std::endl;
	std::cout << "---------------------\n" << std::endl;

	uintptr_t rawAddress = Serializer::serialize(&originalData);
	std::cout << "Serialized address (uintptr_t): " << rawAddress << "\n" << std::endl;
	Data* deserializedData = Serializer::deserialize(rawAddress);
	std::cout << "--- Deserialized Data ---" << std::endl;
	std::cout << "Address: " << deserializedData << std::endl;

	if (deserializedData == &originalData)
	{
		std::cout << "\n[SUCCESS] The pointers match!" << std::endl;
		std::cout << "Deserialized ID:    " << deserializedData->id << std::endl;
		std::cout << "Deserialized Name:  " << deserializedData->name << std::endl;
		std::cout << "Deserialized Value: " << deserializedData->value << std::endl;
	}
	else
		std::cout << "\n[FAILURE] The pointers do not match!" << std::endl;
	return 0;
}