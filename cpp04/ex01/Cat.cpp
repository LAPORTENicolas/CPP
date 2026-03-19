/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:49:15 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 21:17:52 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

#include <iostream>

Cat::Cat() : Animal(), _brain( new Brain() )
{
	std::cout << "Cat constructor\n";
	this->_type = "Cat";
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat copy constructor\n";
	this->_type = obj._type;
	this->_brain = new Brain();
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat copy assignement\n";
	if (this != &obj)
	{
		this->_type = obj._type;
		*this->_brain = *obj._brain;
	}
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor\n";
}

void	Cat::makeSound() const
{
	std::cout << "MMMiiiaaaooooouuuuu\n";
}
