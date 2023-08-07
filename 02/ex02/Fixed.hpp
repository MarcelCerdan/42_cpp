/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 00:22:24 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/07 15:57:43 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {

	private:
	
	int					_fixedPoint;
	static int const	_fractionalBits = 8;
	
	public:
	
	Fixed();
	Fixed(int const fixedPoint);
	Fixed(float const fixedPoint);
	Fixed(Fixed const &src);
	~Fixed();

	Fixed			&operator=(Fixed const &number);
	Fixed			&operator++();
	Fixed			const operator++(int);
	Fixed			&operator--();
	Fixed			const operator--(int);

	int				getRawBits() const;
	void			setRawBits(int const raw);
	float			toFloat() const;
	int				toInt() const;

	static const Fixed	&min(Fixed &firstNmb, Fixed &secondNmb);
	static const Fixed	&min(Fixed const &firstNmb, Fixed const &secondNmb);
	static const Fixed	&max(Fixed& firstNmb, Fixed& secondNmb);
	static const Fixed	&max(Fixed const &firstNmb, Fixed const &secondNmb);
		
};


Fixed			operator/(Fixed const firstNmb, Fixed const secondNmb);
Fixed			operator*(Fixed const firstNmb, Fixed const secondNmb);
Fixed			operator-(Fixed const firstNmb, Fixed const secondNmb);
Fixed			operator+(Fixed const firstNmb, Fixed const secondNmb);
bool			operator!=(Fixed const firstNmb, Fixed const secondNmb);
bool			operator==(Fixed const firstNmb, Fixed const secondNmb);
bool			operator<=(Fixed const firstNmb, Fixed const secondNmb);
bool			operator>=(Fixed const firstNmb, Fixed const secondNmb);
bool			operator<(Fixed const firstNmb, Fixed const secondNmb);
bool			operator>(Fixed const firstNmb, Fixed const secondNmb);
std::ostream	&operator<<(std::ostream &os, Fixed const &number);

#endif