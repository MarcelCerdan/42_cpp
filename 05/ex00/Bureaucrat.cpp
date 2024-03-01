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

Bureaucrat::Bureaucrat() : _name("Karen"), _grade(150) { return ; }

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {

	*this = other;
}

Bureaucrat::~Bureaucrat() { return ; }

std::string Bureaucrat::getName() const {

	return (this->_name);
}

int Bureaucrat::getGrade() const {

	return (this->_grade);
}

void Bureaucrat::increment() {

	_grade--;
}

void Bureaucrat::decrement() {

	_grade++;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {

	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &b) {

	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return os;
}
