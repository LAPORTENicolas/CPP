/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:26:55 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 14:58:46 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap parameter constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{ 
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_health = obj._health;
		this->_energy = obj._energy;
		this->_damage = obj._damage;
	}
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy <= 0 || this->_health <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attacks, health = " << this->_health << ", energy = " << this->_energy << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	/*
	if (this->_health <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't in gate keeper " << std::endl;
		return ;
	}
	*/
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper" << std::endl;
}

/*
void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_health <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't takeDamage, health = " << this->_health << std::endl;
		return ;
	}
	this->_health -= amount;
	std::cout << "ScavTrap " << this->_name << " takeDamage, causing " << amount << " damage, after damage health " << this->_health << "hp" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_energy <= 0 || this->_health <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't beRepaired, health = " << this->_health << ", energy = " << this->_energy << std::endl;
		return ;
	}
	this->_energy--;
	this->_health += amount;
	std::cout << "ScavTrap " << this->_name << " beRepaired, get " << amount << " health, after repair health " << this->_health << "hp" << std::endl;
}
void	ScavTrap::debug()
{
	std::cout << "ClapTrap debug " << this->_name << "\n\t_heatlh: " << this->_health << ", _energy: " << this->_energy << ", _damage: " << this->_damage << std::endl;
}
*/
