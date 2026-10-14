/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:47:30 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/10/14 14:45:02 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// default constructor 
template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>()
{
	std::cout<<"MutantStack default constructor called"<<std::endl;
}

// copy constructor
template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& other) : std::stack<T, Container>(other)
{
	std::cout<<"MutantStack copy contructor called"<<std::endl;
}

// operator
template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack& other)
{
	if (this != &other)
		std::stack<T, Container>::operator=(other);
	return *this;
}

// destructor
template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
	std::cout<<"MutantStack destructor called"<<std::endl;	
}

// iterators
template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::begin()
{
	return this->c.begin();
}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::end()
{
	return this->c.end();
}

template <typename T, typename Container>
typename Container::reverse_iterator MutantStack<T, Container>::rbegin()
{
	return this->c.rbegin();
}

template <typename T, typename Container>
typename Container::reverse_iterator MutantStack<T, Container>::rend()
{
	return this->c.rend();
}

template <typename T, typename Container>
typename Container::const_iterator MutantStack<T, Container>::cbegin() const
{
	return this->c.cbegin();
}

template <typename T, typename Container>
typename Container::const_iterator MutantStack<T, Container>::cend() const
{
	return this->c.cend();
}

template <typename T, typename Container>
typename Container::const_reverse_iterator MutantStack<T, Container>::crbegin() const
{
	return this->c.crbegin();
}

template <typename T, typename Container>
typename Container::const_reverse_iterator MutantStack<T, Container>::crend() const
{
	return this->c.crend();
}