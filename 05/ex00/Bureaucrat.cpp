/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:23:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/22 11:23:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Karen"), grade(150) { return ; }

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {

	if (grade > 150)
		throw
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {

	*this = other;
}

Bureaucrat::~Bureaucrat() { return ; }

std::string Bureaucrat::getName() {

	return (this->name);
}

int Bureaucrat::getGrade() {

	return (this->grade);
}

void Bureaucrat::increment() {

	this->grade--;
}

void Bureaucrat::decrement() {

	this->grade++;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {

	this->name = other.name;
	this->grade = other.grade;
	return (*this);
}
