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
#include "Form.hpp"

int	main() {

	try {
		Bureaucrat a("Michel", 10);
		Bureaucrat b("Bob", 140);
		Form form("A38", 15, 3);

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << form << std::endl;

		a.signForm(&form);
		form.beSigned(&a);
		a.signForm(&form);
		std::cout << std::endl;
		form.beSigned(&b);
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Form form("A38", 0, 3);
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
}
