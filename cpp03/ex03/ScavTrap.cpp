/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:26:55 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 13:39:09 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap parameter constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{ 
	std::cout << "ScavTrap copy constructor called\n";
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit_points = obj._hit_points;
		this->_energy = obj._energy;
		this->_damage = obj._damage;
	}
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy <= 0 || this->_hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attacks, health = " << this->_hit_points << ", energy = " << this->_energy << "\n";
		return ;
	}
	this->_energy--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!\n";
}

void	ScavTrap::guardGate()
{
	/*
	if (this->_hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't in gate keeper " << std::endl;
		return ;
	}
	*/
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper\n";
}

/*
void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't takeDamage, health = " << this->_hit_points << std::endl;
		return ;
	}
	this->_hit_points -= amount;
	std::cout << "ScavTrap " << this->_name << " takeDamage, causing " << amount << " damage, after damage health " << this->_hit_points << "hp" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_energy <= 0 || this->_hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't beRepaired, health = " << this->_hit_points << ", energy = " << this->_energy << std::endl;
		return ;
	}
	this->_energy--;
	this->_hit_points += amount;
	std::cout << "ScavTrap " << this->_name << " beRepaired, get " << amount << " health, after repair health " << this->_hit_points << "hp" << std::endl;
}
*/
/*
void	ScavTrap::debug()
{
	std::cout << "ClapTrap debug " << this->_name << "\n\t_heatlh: " << this->_hit_points << ", _energy: " << this->_energy << ", _damage: " << this->_damage << std::endl;
}
*/
