/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:17:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/09/26 17:17:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("Robotomy", 72, 45){

	this->target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45){

	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other.getName(), 72, 45) {

	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

	return ;
}

std::string RobotomyRequestForm::getTarget() const {

	return (this->target);
}

void RobotomyRequestForm::doExecution() const {

	srand (time(NULL));
	std::cout << "* drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << "Wonderful, " << this->target
				<< "'s robotomization is successful !" << std::endl;
	else
		std::cout << "Oh no, the robotomy failed..." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {

	if (this != &other) {
		this->target = other.target;
	}
	return (*this);
}