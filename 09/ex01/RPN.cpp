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

	for (std::size_t i = 0; i < expression.size(); i++)
	{
		std::string token = expression.substr(i, 1);
		if (!isOperator(expression[i]) && !isdigit(expression[i]) && token != " ")
		{
			std::cout << "Please input a valid inverted Polish mathematical expression" << std::endl;
			exit (1);
		}

		if (!isOperator(expression[i]) && token != " ")
			_stack.push(stoi(token));
		else if (token != " ")
		{
			if (_stack.size() < 2)
			{
				std::cout << "Not enough numbers to do the operation" << std::endl;
				exit (1);
			}

			int nmb2 = _stack.top();
			_stack.pop();
			int nmb1 = _stack.top();
			_stack.pop();

			if (token == "+")
				_stack.push(nmb1 + nmb2);
			else if (token == "-")
				_stack.push(nmb1 - nmb2);
			else if (token == "*")
				_stack.push(nmb1 * nmb2);
			else if (token == "/")
			{
				if (nmb2 == 0)
				{
					std::cout << "Error : division by 0" << std::endl;
					exit (1);
				}
				_stack.push(nmb1 / nmb2);
			}
		}
	}
	if (_stack.size() > 1)
	{
		std::cout << "Please input a valid inverted Polish mathematical expression" << std::endl;
		exit (1);
	}
	std::cout << _stack.top() << std::endl;
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

bool isOperator(const char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}