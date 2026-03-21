/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:49:35 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/21 08:22:38 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

#include <iostream>

Dog::Dog() : _brain( new Brain() )
{
	std::cout << "Dog constructor\n";
	this->_type = "Dog";
}

Dog::Dog(const Dog &obj) : Animal(obj), _brain( new Brain(*obj._brain))
{
	std::cout << "Dog copy constructor\n";
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignement\n";
	if (this != &obj)
	{
		this->Animal::operator=(obj);
		delete this->_brain;
		this->_brain = new Brain(*obj._brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor\n";
}

void	Dog::makeSound() const
{
	std::cout << "Wwwoouuuuaaaffff !!!!\n";
}
