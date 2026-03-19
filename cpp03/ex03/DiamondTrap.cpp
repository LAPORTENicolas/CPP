/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:07:12 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/19 01:26:02 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = "";
	this->_hit_points = 100;
	this->_energy = 50;
	this->_damage = 30;
	std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy = 50;
	this->_damage = 30;
	std::cout << "DiamondTrap parameter constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj._name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = obj._name;
	this->ClapTrap::_name = obj.ClapTrap::_name;
	this->_hit_points = 100;
	this->_energy = 50;
	this->_damage = 30;
	std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->ClapTrap::_name = obj.ClapTrap::_name;
		this->_hit_points = obj._hit_points;
		this->_energy = obj._energy;
		this->_damage = obj._damage;
	}
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap::_name: " << this->ClapTrap::_name << "\n";
	std::cout << "_name: " << this->_name << "\n";
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
