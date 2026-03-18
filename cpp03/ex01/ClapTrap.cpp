/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 12:42:27 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 13:32:11 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

/*
 * "ScavTrap will use the attributes of ClapTrap (update ClapTrap accordingly)"
 * "Hit points (100), representing the health of the ClapTrap"
 * Donc _hit_points = 100 
*/

//ClapTrap::ClapTrap() : _name( "" ), _hit_points( 10 ), _energy( 10 ), _damage( 0 )
ClapTrap::ClapTrap() : _name( "" ), _hit_points( 100 ), _energy( 10 ), _damage( 0 )
{
	std::cout << "ClapTrap default constructor called\n";
}

//ClapTrap::ClapTrap(const std::string &name) : _name ( name ), _hit_points( 10 ), _energy( 10 ), _damage( 0 )
ClapTrap::ClapTrap(const std::string &name) : _name ( name ), _hit_points( 100 ), _energy( 10 ), _damage( 0 )
{
	std::cout << "ClapTrap parameter constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{ 
	std::cout << "ClapTrap copy constructor called\n";
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called\n";
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "ClapTrap copy assignment constructor called\n";
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit_points = obj._hit_points;
		this->_energy = obj._energy;
		this->_damage = obj._damage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy <= 0 || this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attacks, health = " << this->_hit_points << ", energy = " << this->_energy << "\n";
		return ;
	}
	this->_energy--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't takeDamage, health = " << this->_hit_points << "\n";
		return ;
	}
	this->_hit_points -= amount;
	std::cout << "ClapTrap " << this->_name << " takeDamage, causing " << amount << " damage, after damage health " << this->_hit_points << "hp\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy <= 0 || this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't beRepaired, health = " << this->_hit_points << ", energy = " << this->_energy << "\n";
		return ;
	}
	this->_energy--;
	this->_hit_points += amount;
	std::cout << "ClapTrap " << this->_name << " beRepaired, get " << amount << " health, after repair health " << this->_hit_points << "hp\n";
}

/*
void	ClapTrap::debug()
{
	std::cout << "ClapTrap debug " << this->_name << "\n\t_heatlh: " << this->_hit_points << ", _energy: " << this->_energy << ", _damage: " << this->_damage << std::endl;
}
*/
