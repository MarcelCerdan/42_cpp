/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:28:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/22 10:28:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {

	private:

	std::string const 	_name;
	int 				_grade;

	public:

	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat(void);

	std::string getName() const;
	int 		getGrade() const;
	void		increment();
	void		decrement();

	Bureaucrat &operator=(const Bureaucrat &other);

	class	GradeTooHighException : public std::exception {

	public:

		const char *what() const throw() {
			return ("Error : bureaucrat's grade is too high !");
		}
	};

	class	GradeTooLowException : public std::exception {

	public:

		const char *what() const throw() {
			return ("Error : bureaucrat's grade is too low !");
		}
	};

};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &b);

#endif
