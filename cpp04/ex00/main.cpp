/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:44:19 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/20 02:55:19 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "========= Create Animal, Dog and Cat\n";
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "\n========= getType Animal, Dog and Cat\n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "\n========= makeSound Animal, Dog and Cat\n";
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "\n========= delete Animal, Dog and Cat\n";
	delete meta;
	delete i;
	delete j;

	std::cout << "========= Create Animal, Dog and Cat\n";
	const Animal metas = Animal();
	const Animal js = Dog();
	const Animal is = Cat();
	std::cout << "\n========= getType Animal, Dog and Cat\n";
	std::cout << js.getType() << " " << std::endl;
	std::cout << is.getType() << " " << std::endl;
	std::cout << "\n========= makeSound Animal, Dog and Cat\n";
	is.makeSound(); //will output the cat sound!
	js.makeSound();
	metas.makeSound();

	std::cout << "========= Creation WrongAnimal, WrongAnimal Cat and WrongCat\n";
	const WrongAnimal* wAni = new WrongAnimal();
	const WrongAnimal* wCat = new WrongCat();
	const WrongCat* wCat2 = new WrongCat();
	std::cout << "\n========= getType Animal, Dog and Cat\n";
	std::cout << wAni->getType() << " " << std::endl;
	std::cout << wCat->getType() << " " << std::endl;
	std::cout << wCat2->getType() << " " << std::endl;
	std::cout << "\n========= makeSound Animal, Dog and Cat\n";
	wAni->makeSound(); //will output the cat sound!
	wCat->makeSound();
	wCat2->makeSound();
	std::cout << "\n========= delete Animal, Dog and Cat\n";
	delete wAni;
	delete wCat;
	delete wCat2;
	return 0;
}
