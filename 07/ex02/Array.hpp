/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:55:24 by mthibaul          #+#    #+#             */
/*   Updated: 2023/10/10 21:43:53 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <exception>

template < typename T >
class Array {

	private:
		
		T			*_array;
		unsigned	_size;

	public:

	Array() : _array(NULL), _size(0) {};
	
	Array(unsigned n) : _array(new T[n]), _size(n) {

		for (unsigned i = 0; i < n; i++)
			_array[i] = T();
	};

	Array(Array const &src) {
		
		_array = NULL;
		*this = src;
	}
	
	~Array() {

		delete [] _array;
	};

	unsigned size() const {
		
		return (_size);
	}

	Array &operator=(Array const &rhs) {

		if (this != &rhs)
		{
			if (_array)
				delete [] _array;
			_array = new T[rhs._size];
			for (unsigned i = 0; i < _size; i++)
				_array[i] = rhs._array[i];
		}
		return (*this);
	};

	T	&operator[](unsigned index) {
		
		if (index >= _size)
			throw std::exception();
		return (_array[index]);
	};

};

#endif