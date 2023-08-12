/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:35:35 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/12 10:49:48 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wrong animal") {

	std::cout << "Default WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {

	std::cout << "Copy WrongAnimal constructor called." << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "Default WrongAnimal destructor called." << std::endl;
}

void	WrongAnimal::makeSound() const {

	std::cout << "Cowabunga !" << std::endl;
}

std::string	WrongAnimal::getType() const {

	return (this->type);
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs) {

	this->type = rhs.type;
	return (*this);
}