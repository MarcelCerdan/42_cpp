/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:21:00 by mthibaul          #+#    #+#             */
/*   Updated: 2024/06/10 15:29:07 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	double time = 0;

	if (ac < 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}

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
	time = ::sortSequence(vecSequence) / 1000;
	std::cout << "after : ";
	::printContainer(vecSequence);
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << time << " us" << std::endl;

	time = ::sortSequence(dequeSequence) / 1000;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << time << " us" << std::endl;

	return (0);
}
