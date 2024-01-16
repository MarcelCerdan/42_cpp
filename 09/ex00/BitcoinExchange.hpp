/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:29:00 by mthibaul          #+#    #+#             */
/*   Updated: 2024/01/16 12:29:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>

class BitcoinExchange {

private:

	std::map<std::string, float> _bitcoinData;

public:

	BitcoinExchange(void);
	BitcoinExchange(const BitcoinExchange &other);
	~BitcoinExchange(void);
	BitcoinExchange &operator=(const BitcoinExchange &other);

	void calculate(std::string date, double value);


};

#endif
