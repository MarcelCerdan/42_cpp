/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:39:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/10/04 13:39:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>

class Base {

public:
	virtual ~Base(void);

	static Base * generate(void);
	static void identify(Base* p);
	static void identify(Base& p);

};

#endif
