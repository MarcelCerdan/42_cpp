/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:34:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/10/04 15:34:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main() {
	srand(time(NULL));
	Base	*ptr;

	for (int i = 0; i < 10; ++i) {
		ptr = Base::generate();
		Base::identify(ptr);
		Base::identify(*ptr);
		std::cout << std::endl;
		delete ptr;
	}
}
