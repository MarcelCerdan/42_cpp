/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:29:00 by mthibaul          #+#    #+#             */
/*   Updated: 2024/05/16 13:48:15 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {

	std::ifstream dataBase("data.csv");
	if (!dataBase.is_open())
	{
		std::cout << "Unable to open database" << std::endl;
		exit (1);
	}

	std::string line;

	while (dataBase.good())
	{
		std::getline(dataBase, line);
		std::size_t pos = line.find(',');
		_bitcoinData[line.substr(0, pos)] = atof(line.substr(pos + 1).c_str());
	}
	dataBase.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {

	*this = other;
}

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {

	if (this != &other)
		_bitcoinData = other._bitcoinData;
	return (*this);
}

void BitcoinExchange::calculate(std::string date, double value) {

	std::map<std::string, float>::iterator lower;

	lower = _bitcoinData.lower_bound(date);
	--lower;

	float result = lower->second * value;
	std::cout << date << " => " << value << " = " << result << std::endl;
}
