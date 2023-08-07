/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 00:44:49 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/07 15:57:46 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0) { return ; }

Fixed::Fixed(int const fixedPoint) {

	this->_fixedPoint = fixedPoint << this->_fractionalBits;
	
}

Fixed::Fixed(float const fixedPoint) {
	
	this->_fixedPoint = (int) roundf(fixedPoint * (1 << this->_fractionalBits));
	
}

Fixed::Fixed(Fixed const &src) {

	*this = src;

}

Fixed::~Fixed() { return ; }

int		Fixed::getRawBits() const {

	return (this->_fixedPoint);

}

void	Fixed::setRawBits(int const raw) {

	this->_fixedPoint = raw;

}

float	Fixed::toFloat() const {
	
	return ((float)this->_fixedPoint / (1 << this->_fractionalBits));

}

int		Fixed::toInt() const {
	
	return (this->_fixedPoint >> this->_fractionalBits);

}

Fixed	&Fixed::operator=(Fixed const &number) {

	this->_fixedPoint = number.getRawBits();
	return (*this);
	
}

Fixed	&Fixed::operator++() {

	this->_fixedPoint++;
	return (*this);

}

Fixed	const Fixed::operator++(int) {

	Fixed	newNmb = *this;

	this->_fixedPoint++;
	return (newNmb);

}

Fixed	&Fixed::operator--() {

	this->_fixedPoint--;
	return (*this);

}

Fixed	const Fixed::operator--(int) {

	Fixed	newNmb = *this;

	this->_fixedPoint--;;
	return (newNmb);

}

std::ostream	&operator<<(std::ostream &os, Fixed const &number) {

	os << number.toFloat();
	return os;
}

bool	operator>(Fixed const firstNmb, Fixed const secondNmb) {

	if (firstNmb.toFloat() > secondNmb.toFloat())
		return (true);
	return (false);

}

bool	operator<(Fixed const firstNmb, Fixed const secondNmb) {

	if (firstNmb.toFloat() < secondNmb.toFloat())
		return (true);
	return (false);

}

bool	operator>=(Fixed const firstNmb, Fixed const secondNmb) {

	if (firstNmb.toFloat() >= secondNmb.toFloat())
		return (true);
	return (false);

}

bool	operator<=(Fixed const firstNmb, Fixed const secondNmb) {

	if (firstNmb.toFloat() <= secondNmb.toFloat())
		return (true);
	return (false);

}

bool	operator==(Fixed const firstNmb, Fixed const secondNmb) {

	if (firstNmb.toFloat() == secondNmb.toFloat())
		return (true);
	return (false);

}

bool	operator!=(Fixed const firstNmb, Fixed const secondNmb) {

	if (firstNmb.toFloat() != secondNmb.toFloat())
		return (true);
	return (false);

}

Fixed	operator+(Fixed const firstNmb, Fixed const secondNmb) {

	Fixed	newNmb(firstNmb.toFloat() + secondNmb.toFloat());
	return(newNmb);

}

Fixed	operator-(Fixed const firstNmb, Fixed const secondNmb) {

	Fixed	newNmb(firstNmb.toFloat() - secondNmb.toFloat());
	return(newNmb);

}

Fixed	operator*(Fixed const firstNmb, Fixed const secondNmb) {

	Fixed	newNmb(firstNmb.toFloat() * secondNmb.toFloat());
	return(newNmb);

}

Fixed	operator/(Fixed const firstNmb, Fixed const secondNmb) {

	Fixed	newNmb(firstNmb.toFloat() / secondNmb.toFloat());
	return(newNmb);

}

const Fixed	&Fixed::min(Fixed& firstNmb, Fixed& secondNmb) {

	if (firstNmb < secondNmb)
		return (firstNmb);
	else
		return (secondNmb);                                                

}

const Fixed	&Fixed::min(Fixed const &firstNmb, Fixed const &secondNmb) {

	if (firstNmb < secondNmb)
		return (firstNmb);
	else
		return (secondNmb);                                                

}

const Fixed	&Fixed::max(Fixed& firstNmb, Fixed& secondNmb) {

	if (firstNmb > secondNmb)
		return (firstNmb);
	else
		return (secondNmb);                                                

}

const Fixed	&Fixed::max(Fixed const &firstNmb, Fixed const &secondNmb) {

	if (firstNmb > secondNmb)
		return (firstNmb);
	else
		return (secondNmb);                                                

}
