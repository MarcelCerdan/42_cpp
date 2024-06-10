/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:28:00 by mthibaul          #+#    #+#             */
/*   Updated: 2024/06/10 15:29:13 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <sys/time.h> 
#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <deque>
#include <iterator>
#include <ctime>

std::vector<int>	generateJacobsthalNmb(int n);
std::vector<int>	generateModifiedJacobsthalNmb(int n);

template <typename T>
void	printContainer(T &container)
{
	for (typename T::iterator i = container.begin(); i != container.end() - 1; ++i)
		std::cout << *i << " ";
	std::cout << std::endl;
}

template <typename T>
void	binaryInsert(T &vec, int val)
{
	typename T::iterator it = vec.begin();
	while (it != vec.end() && *it != val)
		++it;
	vec.insert(it, val);
}

template <typename T>
int	doPairs(T &container, T &A, T &B)
{
	int odd;

	for (typename T::iterator i = container.begin(); i != container.end(); i++)
	{
		if (i + 1 == container.end())
			odd = *i;
		else if (*i >= *(i + 1))
		{
			A.push_back(*i);
			B.push_back(*(i + 1));
		}
		else
		{
			A.push_back(*(i + 1));
			B.push_back(*i);
		}
		if (i + 1 != container.end())
			i++;
	}
	return (odd);
}

template <typename T>
double	sortSequence(T &container)
{
	clock_t	start_t;
	clock_t	end_t;

	start_t = clock();
	if (container.size() <= 1)
		return (clock() - start_t);

	T	A;
	T	B;
	int odd = doPairs(container, A, B);

	size_t	n = B.size() + 1;
	std::vector<int> jacobsthalNmb = generateModifiedJacobsthalNmb(n);

	int j = 1;
	for (size_t i = 0; i < B.size(); i++)
	{
		while (jacobsthalNmb[j] && jacobsthalNmb[j] >= static_cast<int> (n))
			j++;
		binaryInsert(A, B[jacobsthalNmb[j] - 1]);
		j++;
	}

	if (odd != -1)
	{
		A.push_back(odd);
		std::sort(A.begin(), A.end());
	}
	container.clear();
	container.insert(container.end(), A.begin(), A.end());
	end_t = clock();
	return (end_t - start_t);
}


#endif