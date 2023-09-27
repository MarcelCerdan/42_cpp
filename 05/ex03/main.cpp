/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:58:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/23 15:58:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {

	try {
		Bureaucrat a("Michel", 10);
		Bureaucrat b("Bob", 2);
		Intern i;
		AForm *form;

		form = i.makeForm("shrubbery creation", "./here");
		if (form)
		{
			a.signForm(form);
			form->execute(a);
		}
		delete form;

		std::cout << std::endl;

		form = i.makeForm("robotomy request", "Bender");
		if (form)
		{
			a.signForm(form);
			form->execute(a);
		}
		delete form;

		std::cout << std::endl;

		form = new PresidentialPardonForm("President", "Bruce Wayne");
		a.signForm(form);
		form->execute(b);
		delete form;
	}
	catch (AForm::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (AForm::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (AForm::NotSigned &e) {
		std::cout << e.what() << std::endl;
	}
}
