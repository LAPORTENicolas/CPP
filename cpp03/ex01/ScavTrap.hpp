/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:27:02 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 14:22:45 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &obj);
		~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &obj);
		void		attack(const std::string &target);
		void		guardGate();
		//void		debug();
		//void	takeDamage(unsigned int amount);
		//void	beRepaired(unsigned int amount);
};
