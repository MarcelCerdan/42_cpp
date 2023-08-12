/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:11:48 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/12 10:32:02 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	
	std::cout << "Default Dog constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &src) : Animal(src) {

	std::cout << "Copy Dog constructor called." << std::endl;
	*this = src;
}

Dog::~Dog() {

	std::cout << "Default Dog destructor called." << std::endl;
}

void	Dog::makeSound() const {

	std::cout << "Woof woof" << std::endl;

}

Dog	&Dog::operator=(Dog const &rhs) {

	this->type = rhs.type;
	return (*this);

}