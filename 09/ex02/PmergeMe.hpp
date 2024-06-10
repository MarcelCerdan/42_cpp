/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:28:00 by mthibaul          #+#    #+#             */
/*   Updated: 2024/05/16 15:44:37 by mthibaul         ###   ########.fr       */
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
#include <list>
#include <ctime>

std::vector<int>	generateJacobsthalNmb(int n);
std::vector<int>	generateModifiedJacobsthalNmb(int n);

template <typename T>
void	printContainer(T &container)
{
	for (typename T::iterator i = container.begin(); i != container.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

template <typename T>
void	binaryInsert(std::vector<T>& vec, const T& val)
{
	typename std::vector<T>::iterator it = vec.begin();
	while (it != vec.end() && *it != val)
		++it;
	vec.insert(it, val);
}

template <typename T>
int	doPairs(T &container, std::vector<int> &A, std::vector<int> &B)
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
void	sortSequence(T &container)
{
	if (container.size() <= 1)
		return ;

	std::vector<int>	A;
	std::vector<int>	B;
	int odd = doPairs(container, A, B);

	std::sort(A.begin(), A.end());
	std::sort(B.begin(), B.end());
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
}


#endif