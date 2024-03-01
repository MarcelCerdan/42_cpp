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

	return (_name);
}

int Bureaucrat::getGrade() const {

	return (_grade);
}

void Bureaucrat::increment() {

	_grade--;
}

void Bureaucrat::decrement() {

	_grade++;
}

void Bureaucrat::signForm(Form *form) {

	if (form->getIsSigned())
		std::cout << _name << " can't sign " << form->getName()
				<< " because it's already signed." << std::endl;
	else if (_grade >= form->getGradeToSign())
	std::cout << _name << " can't sign " << form->getName()
			<< " because his grade is too low." << std::endl;
	else
	{
		std::cout << _name << " signed " << form->getName() << std::endl;
		form->beSigned(this);
	}
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {

	if (this != &other)
		_grade = other._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &b) {

	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return os;
}
