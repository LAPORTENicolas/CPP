/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 19:07:15 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/19 22:18:41 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include <iostream>

AMateria::AMateria()
{
	//std::cout << "AMateria constuctor\n";
}

AMateria::AMateria(const std::string &type)
{
	//std::cout << "AMateria parameter constuctor\n";
	this->_name = type;
}

AMateria::AMateria(const AMateria &obj)
{
	//std::cout << "AMateria copy constuctor\n";
	*this = obj;
}

AMateria::~AMateria()
{
	//std::cout << "AMateria destructor\n";
}

AMateria				&AMateria::operator=(const AMateria &obj)
{
	//std::cout << "AMateria copy assignement\n";
	if (this != &obj)
	{
		this->_name = obj._name;
	}
	return *this;
}

const std::string		&AMateria::getType() const
{
	return this->_name;
}
