/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:44:40 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/21 04:48:10 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

Animal::Animal()
{
	std::cout << "Animal constructor\n";
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy constructor\n";
	*this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Animal copy assignement\n";
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor\n";
}

const std::string	&Animal::getType() const
{
	return this->_type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound\n";
}
