/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 19:15:31 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/20 03:15:11 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

#include <iostream>

Ice::Ice()
{
	//std::cout << "Ice constructor called\n";
	this->_name = "ice";
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	//std::cout << "Ice constructor called\n";
	*this = obj;
	this->_name = "ice";
}

Ice::~Ice()
{
	//std::cout << "Ice destructor\n";
}

Ice	&Ice::operator=(const Ice &obj)
{
	//std::cout << "Ice copy assignement\n";
	if (this != &obj)
	{
		this->_name = obj._name;
	}
	return *this;
}

Ice	*Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
