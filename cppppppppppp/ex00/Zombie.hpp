/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 09:32:10 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/13 10:01:42 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie
{
	std::string	name;

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
