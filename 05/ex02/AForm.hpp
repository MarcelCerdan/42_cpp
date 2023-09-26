/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:40:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/23 16:40:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:

	std::string	const name;
	bool		isSigned;
	int const	gradeToSign;
	int const	gradeToExecute;

	public:

	AForm(void);
	AForm(std::string name, int grSign, int grExec);
	AForm(const AForm &other);
	virtual ~AForm(void);

	std::string getName() const;
	int 		getGradeToSign() const;
	int 		getGradeToExec() const;
	bool		getIsSigned() const;
	void		beSigned(Bureaucrat *b);
	void		execute(Bureaucrat const &executor) const;
	virtual void	doExecution() const;

	AForm &operator=(const AForm &other);

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

	class	NotSigned : public std::exception {

	public:

		const char *what() const throw() {
			return ("The form is not signed");
		}
	};
};

std::ostream	&operator<<(std::ostream &os, AForm const &form);

#endif
