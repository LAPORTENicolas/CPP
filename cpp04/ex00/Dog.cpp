/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:49:35 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/21 08:20:07 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

#include <iostream>

Dog::Dog()
{
	std::cout << "Dog constructor\n";
	this->_type = "Dog";
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog copy constructor\n";
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignement\n";
	if (this != &obj)
		this->Animal::operator=(obj);
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
