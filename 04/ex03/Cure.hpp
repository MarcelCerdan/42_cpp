/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:18:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/14 11:18:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

	protected:

	public:

	Cure();
	Cure(Cure const &src);
	~Cure();

	Cure &operator=(Cure const &rhs);

	virtual	AMateria	*clone() const;
	virtual void		use(ICharacter &target);

};

#endif