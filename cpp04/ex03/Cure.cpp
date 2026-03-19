/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 19:15:31 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/19 22:19:54 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

#include <iostream>

Cure::Cure() : AMateria()
{
	//std::cout << "Cure constructor called\n";
	this->_name = "cure";
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
	//std::cout << "Cure constructor called\n";
	*this = obj;
	this->_name = "cure";
}

Cure::~Cure()
{
	//std::cout << "Cure destructor\n";
}

Cure	&Cure::operator=(const Cure &obj)
{
	//std::cout << "Cure copy assignement\n";
	if (this != &obj)
	{
		this->_name = obj._name;
	}
	return *this;
}

Cure	*Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
