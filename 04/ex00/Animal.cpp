/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:06:41 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/12 10:31:50 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {

	std::cout << "Default Animal constructor called." << std::endl;
}

Animal::Animal(Animal const &src) {

	std::cout << "Copy Animal constructor called." << std::endl;
	*this = src;
}

Animal::~Animal() {

	std::cout << "Default Animal destructor called." << std::endl;
}

void	Animal::makeSound() const {

	std::cout << "[No sound]" << std::endl;

}

std::string	Animal::getType() const {

	return (this->type);
}

Animal	&Animal::operator=(Animal const &rhs) {

	this->type = rhs.type;
	return (*this);

}