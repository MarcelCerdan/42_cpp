/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:29:00 by mthibaul          #+#    #+#             */
/*   Updated: 2024/05/16 15:24:51 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
#include <limits.h>

class RPN {

private:
	std::stack<int> _stack;

public:
	RPN(void);
	RPN(std::string expression);
	RPN(const RPN &other);
	~RPN(void);
	RPN &operator=(const RPN &other);


};

bool	isOperator(const char c);

#endif
