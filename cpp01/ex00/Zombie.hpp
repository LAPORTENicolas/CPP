/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 09:32:10 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 13:46:35 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _ZOMBIE_H__
# define _ZOMBIE_H__

#include <string>

class Zombie
{
	std::string	_name;

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void	annonce(void);
};

// randomChump.cpp
void randomChump(std::string name);

// newZombie.cpp
Zombie *newZombie(std::string name);

#endif // _ZOMBIE_H__
