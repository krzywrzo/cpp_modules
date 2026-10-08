/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 09:20:57 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/10/02 11:30:56 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	std::cout<<"--------------\n";
	std::cout<<"INT"<<std::endl;
	int a = 21, b = 37;
	std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
	std::cout<<"max: "<<::max(a, b)<<std::endl;
	std::cout<<"min: "<<::min(a, b)<<std::endl;
	::swap(&a, &b);
	std::cout<<"swap:\n"<<"a: "<<a<<" b: "<<b<<std::endl;
	
	std::cout<<"--------------\n";
	std::cout<<"STRING"<<std::endl;
	std::string c = "test", d = "test2";
	std::cout<<"c: "<<c<<" d: "<<d<<std::endl;
	std::cout<<"max: "<<::max(c, d)<<std::endl;
	std::cout<<"min: "<<::min(c, d)<<std::endl;
	::swap(&c, &d);
	std::cout<<"swap:\n"<<"c: "<<c<<" d: "<<d<<std::endl;
}
