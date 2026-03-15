/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:33:43 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 19:43:24 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(const std::string &type) : _type( type )
{}

Weapon::~Weapon()
{}

void	Weapon::setType(const std::string &type)
{
	std::cout << "new type " << type << "\n";
	this->_type = type;
}

const std::string	&Weapon::getType()
{
	return this->_type;
}
