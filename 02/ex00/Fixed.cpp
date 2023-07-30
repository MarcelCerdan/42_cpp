/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 00:44:49 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/31 00:59:42 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {

	std::cout << "Default constructor called" << std::endl;
	
}

Fixed::Fixed(Fixed const &src) {

	*this = src;
	std::cout << "Copy constructor called" << std::endl;

}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
	
}

Fixed	&Fixed::operator=(Fixed const &number) {

	this->_value = number.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;

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