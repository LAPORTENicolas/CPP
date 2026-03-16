/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 23:26:02 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 20:25:03 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

typedef void (*harlPtrFun)();
enum	harlLevel {DEBUG = 0, INFO, WARNING, ERROR};

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]\n" << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n\n";
}

void	Harl::info()
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]\n" << "think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n\n";
}

void	Harl::error()
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(const std::string &level)
{
	std::string	harlLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	harlPtrFun	harlPtr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int			to_print = -1;

	for (int i=0;i<4;i++)
	{
		if (level == harlLevel[i])
		{
			to_print = i;
			break;
		}
	}
	switch (to_print)
	{
		case ERROR:
			harlPtr[ERROR]();
			break;
		case WARNING:
			for (int i=WARNING;i<4;i++)
				harlPtr[i]();
			break;
		case INFO:
			for (int i=INFO;i<4;i++)
				harlPtr[i]();
			break;
		case DEBUG:
			for (int i=DEBUG;i<4;i++)
				harlPtr[i]();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}
