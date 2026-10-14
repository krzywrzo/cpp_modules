/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:10:50 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/10/08 13:31:03 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"

int main()
{
	int raw_test[] = {2, 4, 5, 6, 34, 53, 65, 69};
	size_t arr_size = sizeof(raw_test) / sizeof(raw_test[0]);
	std::vector<int> test1(raw_test, raw_test + arr_size);
	int notExistingTarget = 2137;
	int existingTarget = 69;

	std::cout<<"Searching for non existing target: "<<notExistingTarget<<std::endl;
	easyFind(test1, notExistingTarget);
	std::cout<<"\nSearching for existing target: "<<existingTarget<<std::endl;
	easyFind(test1, existingTarget);
}