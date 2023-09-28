/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:35:13 by mthibaul          #+#    #+#             */
/*   Updated: 2023/09/28 14:31:08 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() { }

ScalarConverter::ScalarConverter(ScalarConverter const &src) {
	
	*this = src;
}

ScalarConverter::~ScalarConverter() { }

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other) {

	(void)other;
	return (*this);
}

void ScalarConverter::convert(std::string const &literal) {

	char	*endptr;
	bool	canConvert = false;

	double conversion = strtod(literal.c_str(), &endptr);
	if (errno != ERANGE && (*endptr == '\0' || (*endptr == 'f' && *(endptr + 1) == '\0')))
		canConvert = true;
	else if (literal.length() == 1)
	{
		conversion = static_cast<char>(literal[0]);
		canConvert = true;
	}
	convertToChar(conversion, canConvert);
	convertToInt(conversion, canConvert);
	convertToFloat(conversion, canConvert);
	convertToDouble(conversion, canConvert);
	
}

void ScalarConverter::convertToChar(const double conversion, bool canConvert) {

	std::cout << "char: ";
	if (!canConvert || isnan(conversion) || conversion > std::numeric_limits<char>::max() || conversion < std::numeric_limits<char>::min())
		std::cout << "impossible" << std::endl;
	else if (!isprint(static_cast<int>(conversion)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(conversion) << "'" << std::endl;
}

void ScalarConverter::convertToInt(const double conversion, bool canConvert) {
	
	std::cout << "int: ";
	if (!canConvert || isnan(conversion) || conversion > std::numeric_limits<int>::max() || conversion < std::numeric_limits<int>::min())
		std::cout << "impossible" << std::endl;
	else
		 std::cout << static_cast<int>(conversion) << std::endl;
}

void ScalarConverter::convertToFloat(const double conversion, bool canConvert) {
	
	std::cout << "float: ";
	if (!canConvert || (conversion > std::numeric_limits<float>::max() && conversion != std::numeric_limits<float>::infinity()) 
		|| (conversion < -std::numeric_limits<float>::max() && conversion != -std::numeric_limits<float>::infinity()))
		std::cout << "impossible" << std::endl;
	else if (isnan(conversion))
		std::cout << "nanf" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(conversion) << "f" << std::endl;
}

void ScalarConverter::convertToDouble(const double conversion, bool canConvert) {
	
	std::cout << "double: ";
	if (!canConvert)
		std::cout << "impossible" << std::endl;
	else if (isnan(conversion))
		std::cout << "nan" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(conversion) << std::endl;
}