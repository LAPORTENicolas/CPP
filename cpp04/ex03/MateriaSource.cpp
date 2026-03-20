/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 20:12:16 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/20 03:15:45 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

#include <iostream>

MateriaSource::MateriaSource()
{
	//std::cout << "MateriaSource constructor\n";
	for (int i=0; i<4; i++)
		this->_inventory[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	//std::cout << "MateriaSource copy constructor\n";
	for (int i=0; i<4; i++)
		this->_inventory[i] = 0;
	*this = obj;
}

MateriaSource::~MateriaSource()
{
	//std::cout << "MateriaSource destructor\n";
	for (int i=0; i<4; i++)
		if (this->_inventory[i] != 0)
			delete this->_inventory[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
	//std::cout << "MateriaSource copy assignement\n";
	if (this != &obj)
	{
		for (int i=0; i<4; i++)
		{
			if (this->_inventory[i] != 0)
			{
				delete this->_inventory[i];
				this->_inventory[i] = 0;
			}
			if (obj._inventory[i] != 0)
				this->_inventory[i] = obj._inventory[i]->clone();
		}
	}
	return *this;
}

void			MateriaSource::learnMateria(AMateria *obj)
{
	for (int i=0; i<4; i++)
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = obj;
			std::cout << "New materia added slot " << i << "\n";
			return ;
		}
	}
	std::cout << "MateriaSource already know 4 Materias, can't learn more\n";
}

AMateria		*MateriaSource::createMateria(const std::string &type)
{
	for (int i=0; i<4; i++)
	{
		if (this->_inventory[i] != 0 && this->_inventory[i]->getType() == type)
		{
			return this->_inventory[i]->clone();
		}
	}
	std::cout << "MateriaSource::createMateria: unknow type\n";
	return 0;
}
