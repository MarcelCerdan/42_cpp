/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:57:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/09/26 17:57:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Intern.hpp"

Intern::Intern(void) {return ;}

Intern::Intern(const Intern &other) {

	*this = other;
}

Intern::~Intern(void) {return ;}

AForm *Intern::makeForm(std::string name, std::string target) const {

	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm		*aforms[3] = {new PresidentialPardonForm(name, target), new RobotomyRequestForm(name, target), new ShrubberyCreationForm(name, target)};
	
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == name)
		{
			delete (aforms[(i + 1) % 3]);
			delete(aforms[(i + 2) % 3]);
			return (aforms[i]);
		}
	}
	std::cout << "The form's name is incorrect." << std::endl;
	return (NULL);
}

Intern &Intern::operator=(const Intern &other) {

	(void)other;
	return (*this);
}
