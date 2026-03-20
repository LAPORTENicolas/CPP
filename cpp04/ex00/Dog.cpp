/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:49:35 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/20 02:54:43 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

#include <iostream>

Dog::Dog()
{
	std::cout << "Dog constructor\n";
	this->_type = "Dat";
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog copy constructor\n";
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignement\n";
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor\n";
}

void	Dog::makeSound() const
{
	std::cout << "Wwwoouuuuaaaffff !!!!\n";
}
