/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:37:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/15 14:37:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:

	AMateria	*_inventory[4];

	public:

	MateriaSource();
	MateriaSource(MateriaSource const &src);
	~MateriaSource();

	MateriaSource	&operator=(MateriaSource const &src);

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);

};

#endif