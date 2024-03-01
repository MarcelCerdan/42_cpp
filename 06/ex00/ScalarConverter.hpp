/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:35:16 by mthibaul          #+#    #+#             */
/*   Updated: 2023/09/28 13:56:09 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <ctype.h>
#include <cerrno>
#include <cstdlib>
#include <cmath>

class ScalarConverter {

	private:

	ScalarConverter();
	ScalarConverter(ScalarConverter const &src);
	static void	convertToChar(const double conversion, bool canConvert);
	static void	convertToInt(const double conversion, bool canConvert);
	static void	convertToFloat(const double conversion, bool canConvert);
	static void	convertToDouble(const double conversion, bool canConvert);

	public:

	~ScalarConverter();

	ScalarConverter &operator=(ScalarConverter const &rhs);

	static void	convert(const std::string& literal);

};

#endif