/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:31:30 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/10/14 14:47:46 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <exception>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack& operator=(const MutantStack& other);
		~MutantStack();
		
		typedef typename Container::iterator iterator;
		typedef typename Container:: const_iterator const_iterator;
		typedef typename Container:: reverse_iterator reverse_iterator;
		typedef typename Container:: const_reverse_iterator const_reverse_iterator;

		// standard iterators
		iterator begin();
		iterator end();
		// reverse iterators
		reverse_iterator rbegin();
		reverse_iterator rend();
		// const iterators
		const_iterator cbegin() const;
		const_iterator cend() const;
		// const reverse iterators
		const_reverse_iterator crbegin() const;
		const_reverse_iterator crend() const;
	};

#include "MutantStack.tpp"

#endif