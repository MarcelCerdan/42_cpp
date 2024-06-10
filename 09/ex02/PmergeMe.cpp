/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:28:00 by mthibaul          #+#    #+#             */
/*   Updated: 2024/05/16 15:41:14 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int>	generateJacobsthalNmb(int n)
{
	std::vector<int> jacobsthalNmb;

	if (n <= 0)
		return (jacobsthalNmb);
	jacobsthalNmb.push_back(0);
	if (n > 1)
		jacobsthalNmb.push_back(1);

	for (int i = 2; i <= n; i++)
	{
		if (jacobsthalNmb[i-1] + 2 * jacobsthalNmb[i-2] > n)
		{
			jacobsthalNmb.push_back(jacobsthalNmb[i - 1] + 2 * jacobsthalNmb[i - 2]);
			break;
		}
		jacobsthalNmb.push_back(jacobsthalNmb[i - 1] + 2 * jacobsthalNmb[i - 2]);
	}
	return (jacobsthalNmb);
}

std::vector<int>	generateModifiedJacobsthalNmb(int n)
{
	std::vector<int> jacobsthalNmb = generateJacobsthalNmb(n);
	std::vector<int> newJacobsthal;
	std::vector<int>::iterator it = jacobsthalNmb.begin();
	it++;

	while (it != jacobsthalNmb.end())
	{
		int i = 0;
		for (int j = *it; j >= *(it - 1); j--)
		{
			if (i == 0)
			{
				newJacobsthal.push_back(*it);
				i = 1;
			}
			else if (j > *(it - 1))
				newJacobsthal.push_back(j);
		}
		++it;
	}
	return (newJacobsthal);
}