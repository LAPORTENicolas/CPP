/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 12:42:27 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 14:56:44 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name( "" ), _health( 10 ), _energy( 10 ), _damage( 0 )
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name ( name ), _health( 10 ), _energy( 10 ), _damage( 0 )
{
	std::cout << "ClapTrap parameter constructor called" << std::endl;
}

/*
ClapTrap::ClapTrap(std::string name, int health, int energy, int damage) : _name ( name ), _health( health ), _energy( energy ), _damage( damage )
{
	std::cout << "ClapTrap parameter constructor called" << std::endl;
}
*/

ClapTrap::ClapTrap(const ClapTrap &obj)
{ 
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "ClapTrap copy assignment constructor called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_health = obj._health;
		this->_energy = obj._energy;
		this->_damage = obj._damage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy <= 0 || this->_health <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attacks, health = " << this->_health << ", energy = " << this->_energy << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't takeDamage, health = " << this->_health << std::endl;
		return ;
	}
	this->_health -= amount;
	std::cout << "ClapTrap " << this->_name << " takeDamage, causing " << amount << " damage, after damage health " << this->_health << "hp" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy <= 0 || this->_health <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't beRepaired, health = " << this->_health << ", energy = " << this->_energy << std::endl;
		return ;
	}
	this->_energy--;
	this->_health += amount;
	std::cout << "ClapTrap " << this->_name << " beRepaired, get " << amount << " health, after repair health " << this->_health << "hp" << std::endl;
}

/*
void	ClapTrap::debug()
{
	std::cout << "ClapTrap debug " << this->_name << "\n\t_heatlh: " << this->_health << ", _energy: " << this->_energy << ", _damage: " << this->_damage << std::endl;
}
*/
