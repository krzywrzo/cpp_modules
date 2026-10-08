/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 20:18:49 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/10/07 20:23:29 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP 
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array {
private:
    T*				_elements;
	unsigned int	_size;

public:
	Array() : _elements(NULL), _size(0) {}

	Array(unsigned int n) : _elements(new T[n]()), _size(n) {}

	Array(const Array& other) : _elements(NULL), _size(0) {
		if (other._size > 0)
		{
			this->_elements = new T[other._size]();
			for (unsigned int i = 0; i < other._size; i++)
				this->_elements[i] = other._elements[i];
			this->_size = other._size;
		}
	}

	Array& operator=(const Array& other) {
		if (this != &other)
		{
			delete[] this->_elements;

			if (other._size > 0)
			{
				this->_elements = new T[other._size]();
				for (unsigned int i = 0; i < other._size; i++)
				{
					this->_elements[i] = other._elements[i];
				}
				this->_size = other._size;
			}
			else {
				this->_elements = NULL;
				this->_size = 0;
			}
		}
		return *this;
	}

	~Array() {
		delete[] this->_elements;
	}

	class OutOfBoundsException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Error: Index out of bounds";
		}
	};

	T& operator[](unsigned int index) {
		if (index >= this->_size) {
			throw OutOfBoundsException();
		}
		return this->_elements[index];
	}

	const T& operator[](unsigned int index) const {
		if (index >= this->_size) {
			throw OutOfBoundsException();
		}
		return this->_elements[index];
	}

	unsigned int size() const {
		return this->_size;
	}
};

#endif