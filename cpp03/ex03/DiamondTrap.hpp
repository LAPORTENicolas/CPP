/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:07:14 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 14:43:54 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONTRAP_H__
# define _DIAMONTRAP_H__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	std::string _name;

	public:
		DiamondTrap();
		DiamondTrap(std::string);
		DiamondTrap(const DiamondTrap &obj);
		~DiamondTrap();
		DiamondTrap	&operator=(const DiamondTrap &obj);
		void		attack(const std::string &target);
		void		debug();
};

#endif // _DIAMONTRAP_H__
