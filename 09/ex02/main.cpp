/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:21:00 by mthibaul          #+#    #+#             */
/*   Updated: 2024/01/18 12:21:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}

	clock_t	start_t;
	clock_t	end_t;
	std::vector<int>	vecSequence;
	std::deque<int>		dequeSequence;

	for (int i = 1; av[i]; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9' || atoi(av[i]) == -1)
			{
				std::cout << "Please input correct numbers between 0 and 9" << std::endl;
				return (1);
			}
		}
		vecSequence.push_back(atoi(av[i]));
		dequeSequence.push_back(atoi(av[i]));
	}

	std::cout << "before : ";
	::printContainer(vecSequence);

	start_t = clock();
	::sortSequence(vecSequence);
	end_t = clock();
	double time = static_cast<double>(end_t - start_t);
	std::cout << "after : ";
	::printContainer(vecSequence);
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << time << " us" << std::endl;

	start_t = clock();
	::sortSequence(dequeSequence);
	end_t = clock();
	double time2 = static_cast<double>(end_t - start_t);
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << time2 << " us" << std::endl;

	return (0);
}
