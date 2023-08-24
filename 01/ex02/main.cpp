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

	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "string : " << &string << std::endl
			<< "stringPTR : " << stringPTR << std::endl
			<< "stringREF : " << &stringREF << std::endl << std::endl
			<< "string : " << string << std::endl
			<< "stringPTR : " << *stringPTR << std::endl
			<< "stringREF : " << stringREF << std::endl ;

	return 0;
}