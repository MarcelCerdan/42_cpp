/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:11:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/14 11:11:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "Character.hpp"

class Ice : public AMateria {

	protected:

	public:

	Ice();
	Ice(Ice const &src);
	~Ice();

	Ice &operator=(Ice const &rhs);

	virtual	AMateria	*clone() const;
	virtual void		use(ICharacter &target);

};

#endif