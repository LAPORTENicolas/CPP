/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:28:23 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 13:36:25 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called\n";
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap parameter constructor called\n";
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called\n";
	*this = obj;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
}

FragTrap	&FragTrap::operator=(const FragTrap &obj)
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << "high-fives positive request\n";
}
