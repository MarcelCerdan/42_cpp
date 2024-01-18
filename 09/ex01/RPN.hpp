/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:29:00 by mthibaul          #+#    #+#             */
/*   Updated: 2024/01/17 17:29:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

class RPN {

private:
	std::stack<char> _stack;

public:
	RPN(void);
	RPN(std::string expression);
	RPN(const RPN &other);
	~RPN(void);
	RPN &operator=(const RPN &other);

	void	calculate(void);

};

#endif
