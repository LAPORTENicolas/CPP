/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:13:38 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 19:51:44 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//void randomChump(const std::string &name)
void randomChump(std::string name)
{
	Zombie z(name);
	z.annonce();
}
