/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 10:09:29 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/10/13 09:23:55 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : n(0) {}

Span::Span(unsigned int n) : n(n) {}

Span::Span(const Span& other) : n(other.n), numbers(other.numbers) {}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		n = other.n;
		numbers = other.numbers;
	}
	return *this;
}

Span::~Span() {}

int Span::shortestSpan()
{
	int	minSpan = -1;
	try
	{
		if (numbers.empty() || this->n <= 1)
			throw std::runtime_error("No span can be found\n");
		else
		{
			std::vector<int> sorted = numbers;
			sort(sorted.begin(), sorted.end());
			int minSpan = sorted[1] - sorted[0];
			for (size_t i = 2; i < sorted.size(); ++i)
			{
				int diff = sorted[i] - sorted[i - 1];
				if (diff < minSpan)
					minSpan = diff;
			}
			return (minSpan);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr <<"Error caught: "<< e.what() << '\n';
	}
	return(minSpan);
}

int Span::longestSpan()
{
	int	maxSpan = -1;
	try
	{
		if (numbers.empty() || this->n <= 1)
			throw std::runtime_error("No span can be found\n");
		else
		{
			std::vector<int>::const_iterator minIt = std::min_element(numbers.begin(), numbers.end());
			std::vector<int>::const_iterator maxIt = std::max_element(numbers.begin(), numbers.end());
			maxSpan = *maxIt - *minIt;
			return(maxSpan);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr <<"Error caught: "<< e.what() << '\n';
	}
	return(maxSpan);
}

void Span::addNumber(int num)
{
	try
	{
		if (this->numbers.size() >= this->n)
			throw std::runtime_error("Number exceeds limit");
		else
			this->numbers.push_back(num);	
	}
	catch(const std::exception& e)
	{
		std::cerr <<"Error caught: "<< e.what() << '\n';
	}
	
}