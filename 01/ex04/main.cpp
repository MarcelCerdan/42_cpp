/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 00:29:34 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/29 00:50:16 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	printInOfs(std::string filename, std::string s1, std::string s2);

int	main(int ac, char **av) {

	std::ifstream	ifs(av[1]);

	if (ac != 4)
	{
		std::cerr << "Incorrect number of arguments." << std::endl;
		return (1);
	}
	if (!ifs.good())
	{
		std::cerr << "Incorrect file name." << std::endl;
		return (2);
	}
	printInOfs(av[1], av[2], av[3]);
	
}

void	printInOfs(std::string filename, std::string s1, std::string s2) {

	std::ifstream	ifs(filename);
	std::ofstream	ofs(filename + ".replace");
	char			*buffer;

	while (!ifs.eof())
	{
		ifs.getline(buffer, 1);
	}
}