/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 00:44:49 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/04 20:36:04 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0) {

	std::cout << "Default constructor called" << std::endl;
	
}

Fixed::Fixed(int const fixedPoint) {

	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = fixedPoint << this->_fractionalBits;
	
}

Fixed::Fixed(float const fixedPoint) {
	
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = (int) roundf(fixedPoint * (1 << this->_fractionalBits));
	
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
	this->_fixedPoint = number.getRawBits();
	return (*this);
	
}

std::ostream	&operator<<(std::ostream &os, Fixed const &number) {

	os << number.toFloat();
	return os;
}

int		Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);

}

void	Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;

}

float	Fixed::toFloat() const {
	
	return ((float)this->_fixedPoint / (1 << this->_fractionalBits));

}

int		Fixed::toInt() const {
	
	return (this->_fixedPoint >> this->_fractionalBits);

}
