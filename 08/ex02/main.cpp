/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:08:49 by mthibaul          #+#    #+#             */
/*   Updated: 2023/10/11 18:14:45 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() {
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	
	mstack.pop();

	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;
		
	std::list<int> listTest;

	listTest.push_back(5);
	listTest.push_back(17);
	
	std::cout << *(++listTest.begin()) << std::endl;

	listTest.pop_back();
	
	std::cout << listTest.size() << std::endl;

	listTest.push_back(3);
	listTest.push_back(5);
	listTest.push_back(737);
	listTest.push_back(0);
	
	std::list<int>::iterator itList = listTest.begin();
	std::list<int>::iterator iteList = listTest.end();
	
	++itList;
	--itList;
	while (itList != iteList)
	{
		std::cout << *itList << std::endl;
		++itList;
	}

	return 0;
}
