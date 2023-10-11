/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:38:07 by mthibaul          #+#    #+#             */
/*   Updated: 2023/10/11 17:44:59 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdlib.h>

int main() {
	
	std::vector<int> vec1(10000, 1);
	std::vector<int>::iterator it = vec1.begin();
	Span	sp(10000);
	srand(time(NULL));
	
	for(; it != vec1.end(); it++)
		*it = rand();
	try {
		sp.addManyNumbers(vec1.begin(), vec1.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	};

	std::cout << std::endl;

	try {
		sp.addNumber(10);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	};

	std::cout << std::endl;

	try {
		Span sp2(10);
		sp2.addNumber(1);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	};

	std::cout << std::endl;

	try {
		Span sp3 = Span(5);
		
		sp3.addNumber(6);
		sp3.addNumber(3);
		sp3.addNumber(17);
		sp3.addNumber(9);
		sp3.addNumber(11);
		
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	};
	
	return 0;
}
