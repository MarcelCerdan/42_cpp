/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 00:29:34 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/30 18:27:39 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void		replaceInput(std::ifstream &ifs, std::ofstream &ofs, std::string s1, std::string s2);
std::string	getInputContent(std::ifstream &ifs);

int	main(int ac, char **av) {

	std::ifstream	ifs(av[1]);
	std::ofstream	ofs;
	std::string		outputName;

	if (ac != 4)
	{
		std::cerr << "Incorrect number of arguments." << std::endl;
		return (1);
	}
	if (!ifs.good())
	{
		std::cerr << "Input file cannot be opened." << std::endl;
		return (2);
	}
	outputName = av[1];
	outputName += ".replace";
	ofs.open(outputName.c_str());
	if (!ofs.good())
	{
		std::cerr << "Output file cannot be opened." << std::endl;
		return (2);
	}
	replaceInput(ifs, ofs, av[2], av[3]);
}

void	replaceInput(std::ifstream &ifs, std::ofstream &ofs, std::string s1, std::string s2) {
	
	std::string	inputContent;
	size_t		pos;

	(void)ofs;
	inputContent = getInputContent(ifs);
	pos = inputContent.find(s1);
	while (pos != std::string::npos)
	{
		inputContent.erase(pos, s1.size());
		inputContent.insert(pos, s2);
		pos += s2.size();
		pos = inputContent.find(s1, pos);
	}
	ofs << inputContent;
}

std::string	getInputContent(std::ifstream &ifs) {

	char		buf;
	std::string	buffer;

	while (ifs.get(buf))
		buffer += buf;
	return (buffer);
}