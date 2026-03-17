/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:07:12 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 14:54:11 by nlaporte         ###   ########.fr       */
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
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_damage = ScavTrap::_damage;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name;
	/*
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 30;
	*/
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_damage = ScavTrap::_damage;
	std::cout << "DiamondTrap parameter constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj._name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = obj._name;
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_damage = ScavTrap::_damage;
	/*
	this->_name = obj._name;
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 30;
	*/
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		//this->ClapTrap::_name = obj._name + "_clap_name";
		this->ClapTrap::_name = obj.ClapTrap::_name;// + "_clap_name";
		this->_health = obj._health;
		this->_energy = obj._energy;
		this->_damage = obj._damage;
	}
	return *this;
}

void	DiamondTrap::debug()
{
	//std::cout << "_name = " << this->DiamondTrap::_name << std::endl;
	std::cout << "_name = " << this->_name << std::endl;
	std::cout << "_health = " << this->_health << std::endl;
	std::cout << "_energy = " << this->_energy << std::endl;
	std::cout << "_damage = " << this->_damage << std::endl;
	std::cout << "ScavTrap::_name = " << this->ScavTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
