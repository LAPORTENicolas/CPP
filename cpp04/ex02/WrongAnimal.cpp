/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 20:01:01 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 20:01:19 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy constructor\n";
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy assignement\n";
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor\n";
}

const std::string	&WrongAnimal::getType() const
{
	return this->_type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound\n";
}
