/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:41:09 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/12 10:44:16 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {

	std::cout << "Default WrongCat constructor called." << std::endl;
	this->type = "Wrong cat";
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src) {

	std::cout << "Copy WrongCat constructor called." << std::endl;
	*this = src;
}

WrongCat::~WrongCat() {

	std::cout << "Default WrongCat destructor called." << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs) {

	this->type = rhs.type;
	return (*this);
}