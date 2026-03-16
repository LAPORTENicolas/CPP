/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 23:30:50 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 20:20:33 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

typedef void	(Harl::*harlPtrFun)();

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug(void)
{
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	std::string	arr_level[4] = {"ERROR", "WARNING", "INFO", "DEBUG"};
	harlPtrFun	funArr[4] = {&Harl::error, &Harl::warning, &Harl::info, &Harl::debug};

	for (int i=0; i<4; i++)
	{
		if (level == arr_level[i])
		{
			((*this).*funArr[i])();
			return;
		}
	}
	std::cerr << "Error: arg is not valide\n";
}
