/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 19:32:20 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/19 22:19:35 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

#include <iostream>

Character::Character() : ICharacter()
{
	//std::cout << "Character constructor\n";
	for (int i=0; i<4; i++)
		this->_inventory[i] = 0;
}

Character::Character(const std::string &name) : ICharacter()
{
	//std::cout << "Character paramter constructor\n";
	for (int i=0; i<4; i++)
		this->_inventory[i] = 0;
	this->_name = name;
}

Character::Character(const Character &obj) : ICharacter(obj)
{
	//std::cout << "Character copy constructor\n";
	*this = obj;
}

Character	&Character::operator=(const Character &obj)
{
	//std::cout << "Character copy assignement \n";
	if (this != &obj)
	{
		this->_name = obj._name;
		for (int i=0; i<4; i++)
			if (obj._inventory[i] != 0)
				this->_inventory[i] = obj._inventory[i]->clone();
	}
	return *this;
}

Character::~Character()
{
	//std::cout << "Character destructor\n";
	for (int i=0; i<4; i++)
		if (this->_inventory[i] != 0)
			delete this->_inventory[i];
}

const std::string	&Character::getName() const
{
	return this->_name;
}

void				Character::equip(AMateria *m)
{
	for (int i=0; i<4; i++)
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full\n";
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Inventory idx 0-3\n";
		return ;
	}
	if (this->_inventory[idx] != 0)
	{
		delete this->_inventory[idx];
		this->_inventory[idx] = 0;
	}
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Inventory idx 0-3\n";
		return ;
	}
	if (this->_inventory[idx] != 0)
		this->_inventory[idx]->use(target);
}
