/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 00:22:24 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/04 20:27:19 by mthibaul         ###   ########.fr       */
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

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;
	
};

std::ostream	&operator<<(std::ostream &os, Fixed const &number);

#endif