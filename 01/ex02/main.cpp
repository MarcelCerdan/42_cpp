/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 22:29:49 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 22:49:38 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {

	std::string		str = "HI THIS IS BRAIN";
	std::string*	strPTR = &str;
	std::string&	strREF = str;

	std::cout << "str : " << &str << std::endl
			<< "strPTR : " << strPTR << std::endl
			<< "strREF : " << &strREF << std::endl << std::endl
			<< "str : " << str << std::endl
			<< "strPTR : " << *strPTR << std::endl
			<< "strREF : " << strREF << std::endl ;

	return 0;
}