/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 12:13:28 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/08/21 15:51:46 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{

	std::cout<<"TESTS: "<<std::endl;

	std::cout<<std::endl<<"Test #1: normal bureaucrat"<<std::endl;
	try
	{
		Bureaucrat *b1 = new Bureaucrat("b1", 10);
		std::cout<<*b1<<std::endl;
		delete b1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout<<std::endl<<"Test #2: bureaucrat with too low or too high grade"<<std::endl;
	try
	{
		Bureaucrat *b1 = new Bureaucrat("b1", -1);
		std::cout<<*b1<<std::endl;
		delete b1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat *b2 = new Bureaucrat("b2", 200);
		std::cout<<*b2<<std::endl;
		delete b2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout<<std::endl<<"Test #3: incrementing and decrementing grade"<<std::endl;
	try
	{
		Bureaucrat *b1 = new Bureaucrat("b1", 69);
		std::cout<<b1->getGrade()<<std::endl;
		std::cout<<"Incrementing grade"<<std::endl;
		b1->incrementGrade();
		std::cout<<b1->getGrade()<<std::endl;

		std::cout<<"Decrementing grade"<<std::endl;
		b1->decrementGrade();
		std::cout<<b1->getGrade()<<std::endl;
		delete b1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout<<std::endl<<"Test #3: incrementing and decrementing grade (but grade is outside scope)"<<std::endl;
	try
	{
		Bureaucrat *b1 = new Bureaucrat("b1", 150);
		std::cout<<b1->getGrade()<<std::endl;
		std::cout<<"Decrementing grade"<<std::endl;
		b1->decrementGrade();
		std::cout<<b1->getGrade()<<std::endl;

		std::cout<<"Incrementing grade"<<std::endl;
		b1->incrementGrade();
		std::cout<<b1->getGrade()<<std::endl;
		delete b1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}