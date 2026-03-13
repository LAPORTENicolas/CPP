/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:33:43 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/09 21:56:23 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{}

void	Weapon::setType(std::string type)
{
	std::cout << "new type " << type << std::endl;
	this->type = type;
}

const std::string	Weapon::getType() const
{
	return this->type;
}
