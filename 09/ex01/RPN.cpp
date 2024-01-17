/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:29:00 by mthibaul          #+#    #+#             */
/*   Updated: 2024/01/17 17:29:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(std::string expression) {

	for (int i = expression.size() - 1; i >= 0; i--)
	{
		if (expression.find_first_of("+-/*", i, 1) == std::string::npos && !isdigit(expression[i]) && expression[i] != ' ')
		{
			std::cout << "Please input a valid inverted Polish mathematical expression" << std::endl;
			exit (1);
		}

		if (expression[i] != ' ')
			_stack.push(expression[i]);
	}
}

RPN::RPN(const RPN &other) {

	*this = other;
}

RPN::~RPN(void) {}

RPN &RPN::operator=(const RPN &other) {

	if (this != &other) {
		_stack = other._stack;
	}
	return (*this);
}

void RPN::calculate() {

	int 	result = _stack.top() - 48;

	std::string 	number;
	char			operation;

	_stack.pop();
	while (!_stack.empty())
	{
		number = _stack.top();
		_stack.pop();
		if (!isdigit(number[0]))
		{
			std::cout << "Please input a valid inverted Polish mathematical expression" << std::endl;
			exit (1);
		}

		if (_stack.empty())
		{
			std::cout << "Please input a valid inverted Polish mathematical expression" << std::endl;
			exit (1);
		}
		operation = _stack.top();
		_stack.pop();
		if (operation == '+')
			result += stoi(number);
		else if (operation == '-')
			result -= stoi(number);
		else if (operation == '/')
			result /= stoi(number);
		else if (operation == '*')
			result *= stoi(number);
		else
		{
			std::cout << "Please input a valid inverted Polish mathematical expression" << std::endl;
			exit (1);
		}
	}

	std::cout << result << std::endl;
}