/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:11:07 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/10/08 13:29:04 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>


template <typename T>
int easyFind(T const& arr, int target)
{
	int index = -1;
	try
	{
		typename T::const_iterator elem = std::find(arr.begin(), arr.end(), target);
		if (elem != arr.end())
		{
			index = std::distance(arr.begin(), elem);
			std::cout<<"Targeted number found at: "<<index<<std::endl;
		}
		else
			throw std::runtime_error("Target not found");
	}
	catch(const std::exception& e)
	{
		std::cerr <<"Error caught: "<< e.what() << '\n';
	}
	return(index);
}

#endif