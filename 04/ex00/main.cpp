/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:23:29 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/12 10:53:12 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	const WrongAnimal* wrong = new WrongAnimal();

	std::cout << std::endl << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << wrong->getType() << " " << std::endl << std::endl;
	
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	k->makeSound();
	wrong->makeSound();
	
	delete meta;
	delete j;
	delete i;
	delete k;
	delete wrong;
	return 0;
}
