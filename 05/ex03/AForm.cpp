/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:40:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/23 16:40:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "AForm.hpp"

AForm::AForm(void) : name("A38 pass"), target("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150) {

	return ;
}

AForm::AForm(std::string name, std::string target, int grSign, int grExec) : name(name), target(target), isSigned(false),
	gradeToSign(grSign), gradeToExecute(grExec) {

	if (grSign > 150 || grExec > 150)
		throw GradeTooLowException();
	else if (grSign < 1 || grExec < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &other) : gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute){

	*this = other;
}

AForm::~AForm(void) { return ; }

std::string AForm::getName() const {
	return (this->name);
}

std::string AForm::getTarget() const {
	return (this->target);
}

void AForm::setTarget(std::string target) {
	this->target = target;
}

int AForm::getGradeToSign() const {
	return (this->gradeToSign);
}

int AForm::getGradeToExec() const {
	return (this->gradeToExecute);
}

bool AForm::getIsSigned() const {
	return (this->isSigned);
}

void AForm::beSigned(Bureaucrat *b) {

	if (b->getGrade() <= this->gradeToSign)
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

void AForm::execute(const Bureaucrat &executor) const {

	if (!this->isSigned)
		throw NotSigned();
	else if (executor.getGrade() > this->gradeToExecute)
		throw GradeTooLowException();
	else
		this->doExecution();
}

void AForm::doExecution() const {

	std::cout << "Form" << this->name << "has been executed" << std::endl;
}

AForm &AForm::operator=(const AForm &other) {
	(void)other;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, AForm const &form) {

	os << "Form " << form.getName() << ", grade required to sign " << form.getGradeToSign()
		<< ", grade required to execute " << form.getGradeToExec();
	if (form.getIsSigned())
		os << ", the form is signed." << std::endl;
	else
		os << ", the form is not signed." << std::endl;
	return os;
}