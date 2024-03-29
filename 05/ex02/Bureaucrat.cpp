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

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {

	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {

	*this = other;
}

Bureaucrat::~Bureaucrat() { return ; }

std::string Bureaucrat::getName() const {

	return (this->name);
}

int Bureaucrat::getGrade() const {

	return (this->grade);
}

void Bureaucrat::increment() {

	this->grade--;
}

void Bureaucrat::decrement() {

	this->grade++;
}

void Bureaucrat::signForm(AForm *form) {

	if (this->grade > form->getGradeToSign())
		std::cout << this->name << " can't sign " << form->getName()
				  << " because is grade is too low." << std::endl;
	else if (form->getIsSigned())
		std::cout << this->name << " can't sign " << form->getName()
				<< " because it's already signed." << std::endl;
	else
	{
		std::cout << this->name << " signed " << form->getName() << std::endl;
		form->beSigned(this);
	}
}

void Bureaucrat::executeForm(const AForm *form) {

	if (!form->getIsSigned())
		std::cout << this->name << " can't execute " << form->getName()
				  << " because it's not signed." << std::endl;
	else {
		form->execute(*this);
		std::cout << this->name << " executed " << form->getName() << std::endl;
	}
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {

	if (this != &other)
		this->grade = other.grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &b) {

	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return os;
}
