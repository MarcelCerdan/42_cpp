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

Form::Form(void) : _name("A38 pass"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {

	return ;
}

Form::Form(std::string name, int grSign, int grExec) : _name(name), _isSigned(false),
	_gradeToSign(grSign), _gradeToExecute(grExec) {

	if (grSign > 150 || grExec > 150)
		throw GradeTooLowException();
	else if (grSign < 1 || grExec < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {

	_isSigned = false;
	*this = other;
}

Form::~Form(void) { return ; }

std::string Form::getName() const {
	return (_name);
}

int Form::getGradeToSign() const {
	return (_gradeToSign);
}

int Form::getGradeToExec() const {
	return (_gradeToExecute);
}

bool Form::getIsSigned() const {
	return (_isSigned);
}

void Form::beSigned(Bureaucrat *b) {

	if (b->getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw GradeTooLowException();
}

Form &Form::operator=(const Form &other) {

	(void)other;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Form const &form) {

	os << "Form " << form.getName() << ", grade required to sign " << form.getGradeToSign()
		<< ", grade required to execute " << form.getGradeToExec();
	if (form.getIsSigned())
		os << ", the form is signed." << std::endl;
	else
		os << ", the form is not signed." << std::endl;
	return os;
}