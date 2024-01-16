/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:21:00 by mthibaul          #+#    #+#             */
/*   Updated: 2024/01/16 13:21:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "BitcoinExchange.hpp"

void	doExchange(char *inputFileName);
int		checkLine(std::size_t pos, std::string line);
int		checkDate(std::string date);
int		checkValue(std::string value);

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		exit(0);
	}

	doExchange(av[1]);
}

void	doExchange(char *inputFileName)
{
	std::ifstream inputFile(inputFileName);

	if (!inputFile.is_open())
	{
		std::cout << "Unable to open the input file" << std::endl;
		exit (1);
	}

	BitcoinExchange bitcoinExchange;
	std::string	line;

	while (inputFile.good())
	{
		std::getline(inputFile, line);
		std::size_t pos = line.find('|');
		if (!checkLine(pos, line))
		{
			try {
				std::string date = line.substr(0, pos - 1);
				float value = std::stof(line.substr(pos + 2));
				bitcoinExchange.calculate(date, value);
			}
			catch (const std::out_of_range& oor) {
				std::cerr << "Error : number too large" << '\n';
			}
		}
	}
	inputFile.close();
}

int checkLine(std::size_t pos, std::string line)
{
	if (pos == std::string::npos)
	{
		std::cout << "Error : no value indicated" << std::endl;
		return (1);
	}

	std::string date = line.substr(0, pos);
	if (date == "date " || checkDate(date) != 0)
		return (1);

	std::string value = line.substr(pos + 2);
	if (checkValue(value) != 0)
		return (1);

	return (0);
}

int	checkDate(std::string date)
{
	if (date.size() != 11 || date.back() != ' ')
	{
		std::cout << "Error : bad input => " << date << std::endl;
		return (1);
	}
	date.erase(10);
	for (std::size_t i = 0; i < date.size(); i++)
	{
		if (!isdigit(date[i]) && date[i] != '-')
		{
			std::cout << "Error : bad input => " << date << std::endl;
			return (1);
		}
	}
	return (0);
}

int	checkValue(std::string value)
{
	if (value[0] == '-')
	{
		std::cout << "Error : not a positive number" << std::endl;
		return (1);
	}

	for (std::size_t i = 0; i < value.size(); i++)
	{
		if (!isdigit(value[i]) && value[i] != '.')
		{
			std::cout << "Error : bad input => " << value << std::endl;
			return (1);
		}
	}

	return (0);
}