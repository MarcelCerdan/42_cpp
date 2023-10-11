/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:06:29 by mthibaul          #+#    #+#             */
/*   Updated: 2023/10/11 17:43:45 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) { }

Span::Span(unsigned N) : _N(N) { }

Span::Span(Span const &src) {

	*this = src;
}

Span::~Span() { }

Span &Span::operator=(Span const &other) {

	if (this != &other)
	{
		_N = other._N;
		_vec = other._vec;
	}
	return (*this);
}

std::vector<int> Span::getVec() {
	
	return (_vec);
}

void	Span::addNumber(int n) {
	
	if (_vec.size() < _N)
		_vec.push_back(n);
	else
		throw FullException();
}

void	Span::addManyNumbers(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last) {
	
	std::vector<int>	elementsToAdd;
	
	if (_vec.size() == _N)
		throw FullException();
	
	elementsToAdd.assign(first, last);
	while (_vec.size() + elementsToAdd.size() > _N)
		elementsToAdd.pop_back();
	_vec.insert(_vec.end(), elementsToAdd.begin(), elementsToAdd.end());
}

int Span::shortestSpan() {

	if (_vec.size() == 0 || _vec.size() == 1)
		throw EmptyException();

	std::vector<int> copy = _vec;
	std::sort(copy.begin(), copy.end());
	
	std::vector<int>::const_iterator it = copy.begin();
	int	last = *it++;
	int	minSpan = *it - last;

	for(; it != copy.end(); it++)
	{
		if (*it - last < minSpan)
			minSpan = *it - last;
		last = *it;
	}
	return (minSpan);
}

int Span::longestSpan() {
	
	if (_vec.size() == 0 || _vec.size() == 1)
		throw EmptyException();
	
	return (*std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end()));
}