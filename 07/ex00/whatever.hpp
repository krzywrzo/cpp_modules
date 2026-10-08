/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 09:10:01 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/10/02 10:23:04 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
T max(T a, T b)
{
	return (a > b) ? a : b;
}

template <typename S>
S min(S a, S b)
{
	return (a < b) ? a : b;
}

template <typename Z>
void swap(Z *a, Z *b)
{
	Z temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

#endif