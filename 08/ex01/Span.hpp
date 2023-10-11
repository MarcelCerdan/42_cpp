/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:51:32 by mthibaul          #+#    #+#             */
/*   Updated: 2023/10/11 17:22:47 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <algorithm>
#include <vector>
#include <exception>
#include <iostream>

class Span {

	private:

	unsigned			_N;
	std::vector<int>	_vec;

	public:

	Span();
	Span(unsigned N);
	Span(Span const &src);
	~Span();
	
	std::vector<int> getVec();
	void	addNumber(int n);
	void	addManyNumbers(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last);
	int		shortestSpan();
	int		longestSpan();

	Span &operator=(Span const &rhs);

	class FullException : public std::exception {
	
	public:
	
		virtual const char* what() const throw() {
			return ("The Span is already full !");
		}
	};
	
	class EmptyException : public std::exception {
	
	public:
	
		virtual const char* what() const throw() {
			return ("The Span is empty or contains only one element !");
		}
	};
};

#endif