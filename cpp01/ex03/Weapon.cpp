/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:33:43 by nlaporte          #+#    #+#             */
/*   Updated: 2026/02/10 10:12:56 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon() : type{ "" }
{}

Weapon::Weapon(std::string type) : type{ type }
{}

Weapon::~Weapon()
{}

void	Weapon::setType(std::string type)
{
	std::cout << "new type " << type << std::endl;
	//this->type = type;
}

std::string	Weapon::getType()
{
	return this->type;
}
