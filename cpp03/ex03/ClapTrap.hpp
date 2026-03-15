/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 12:02:09 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/14 15:34:40 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _CLAPTRAP_H__
# define _CLAPTRAP_H__

#include <string>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_health;
		int			_energy;
		int			_damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		//ClapTrap(std::string name, int health, int energy, int damage);
		ClapTrap(const ClapTrap &obj);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &obj);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	debug();
};

#endif // _CLAPTRAP_H__
