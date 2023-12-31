/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 00:44:49 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/04 20:32:46 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {

	std::cout << "Default constructor called" << std::endl;
	
}

Fixed::Fixed(Fixed const &src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
	
}

Fixed	&Fixed::operator=(Fixed const &number) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = number.getRawBits();
	return (*this);
	
}

int		Fixed::getRawBits() const{

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);

}

void	Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;

}