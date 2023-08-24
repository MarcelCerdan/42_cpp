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
#include "Form.hpp"

Form::Form(void) : name("A38 pass"), isSigned(false), gradeToSign(150), gradeToExecute(150) {

	return ;
}

Form::Form(std::string name, int grSign, int grExec) : name(name), isSigned(false),
	gradeToSign(grSign), gradeToExecute(grExec) {

	if (grSign > 150 || grExec > 150)
		throw GradeTooLowException();
	else if (grSign < 1 || grExec < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &other) : gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute){

	*this = other;
}

Form::~Form(void) { return ; }

std::string Form::getName() const {
	return (this->name);
}

int Form::getGradeToSign() const {
	return (this->gradeToSign);
}

int Form::getGradeToExec() const {
	return (this->gradeToExecute);
}

bool Form::getIsSigned() const {
	return (this->isSigned);
}

void Form::beSigned(Bureaucrat *b) {

	if (b->getGrade() <= this->gradeToSign)
		this->isSigned = true;
	else
		throw GradeTooLowException();
	b->signForm(this);
}

Form &Form::operator=(const Form &other) {
	(void)other;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Form const &form) {

	os << "Form " << form.getName() << ", grade required to sign " << form.getGradeToSign()
		<< ", grade required to execute " << form.getGradeToExec()
		<< ", the form is signed : " << form.getIsSigned() << std::endl;
	return os;
}