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

	class	GradeTooHighException : public std::exception {
		const char *error() const throw();
	};

	class	GradeTooLowException : public std::exception {
		const char *error() const throw();
	};

	private:

	std::string const name;
	int	grade;

	public:

	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat(void);

	std::string getName();
	int 		getGrade();
	void		increment();
	void		decrement();

	Bureaucrat &operator=(const Bureaucrat &other);
};

#endif
