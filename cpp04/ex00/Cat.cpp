/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:49:15 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/20 02:54:26 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

#include <iostream>

Cat::Cat()
{
	std::cout << "Cat constructor\n";
	this->_type = "Cat";
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat copy constructor\n";
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat copy assignement\n";
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor\n";
}

void	Cat::makeSound() const
{
	std::cout << "MMMiiiaaaooooouuuuu\n";
}
