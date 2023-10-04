/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:39:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/10/04 13:39:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <typeinfo>

Base::~Base(void) {}

Base *Base::generate() {

	int		random = rand() % 3;
	Base	*ptr;

	if (random == 0)
		ptr = new A();
	else if (random == 1)
		ptr = new B();
	else
		ptr = new C();
	return (ptr);
}

void Base::identify(Base *p) {

	std::cout << "Type using pointer : ";
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Wrong type" << std::endl;
}

void Base::identify(Base &p) {

	std::cout << "Type using reference : ";
	try {
		(void) dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (const std::exception& e) {};
	try {
		(void) dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (const std::exception& e) {};
	try {
		(void) dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (const std::exception& e) {};
	std::cout << "Wrong type" << std::endl;
}