#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]\n" << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
	this->info();
}

void	Harl::info()
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
	this->warning();
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]\n" << "think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n" << std::endl;
	this->error();
}

void	Harl::error()
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::ok()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

unsigned long	Harl::hash_pls(std::string level)
{
	unsigned long	hash = 5381;
	int				len = level.length();

	for (int i=0; i<len; i++)
		hash = (hash >> 5) + hash + static_cast<int>(level[i]);

	return hash;
}

void	(Harl::*Harl::complain(std::string level))()
{
	unsigned long	hash = hash_pls(level);
	switch (hash)
	{
		case 6692:
			return &Harl::error;
			break;
		case 7258:
			return &Harl::warning;
			break;
		case 6398:
			return &Harl::info;
			break;
		case 6655:
			return &Harl::debug;
			break;
		default:
			return &Harl::ok;
	}
}
