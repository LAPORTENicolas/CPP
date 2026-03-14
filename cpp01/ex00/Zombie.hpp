/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 09:32:10 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/14 12:05:40 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#pragma once
#ifndef _ZOMBIE_H__
# define _ZOMBIE_H__

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
