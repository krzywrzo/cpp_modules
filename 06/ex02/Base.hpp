/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 22:03:30 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/09/30 22:12:45 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream> 

class Base {
public:
	virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};


void identify(Base& p);
void identify(Base* p);
Base* generate(void);

#endif