/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 20:31:11 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/20 03:00:22 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor\n";
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy constructor\n";
	*this = obj;
}

Brain	&Brain::operator=(const Brain &obj)
{
	std::cout << "Brain copy assignement\n";
	if (this != &obj)
	{
		for (int i=0;i<100;i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor\n";
}
