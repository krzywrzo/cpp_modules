/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 11:32:28 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/10/07 18:38:39 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>


template <typename D>
void printElem(D const & elem)
{
	std::cout<<elem<<std::endl;
}

template <typename T>
void iter(T *a, size_t arr_len, void (*func)(T const &))
{
	for (int i = 0; i < arr_len; i++)
		func(a[i]);
}

#endif