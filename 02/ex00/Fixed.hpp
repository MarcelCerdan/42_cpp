/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 00:22:24 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/31 00:54:53 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

	private:
	
	int					_value;
	static int const	_fractionalBits = 8;
	
	public:
	
	Fixed();
	Fixed(Fixed const &src);
	~Fixed();

	Fixed	&operator=(Fixed const &number);

	int		getRawBits() const;
	void	setRawBits(int const raw);
	
};

#endif