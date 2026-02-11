#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{}

Harl::~Harl()
{}


void	Harl::debug()
{
	std::cout << "[ DEBUG ]\n" << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
	this->info();
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

void	(Harl::*Harl::complain(std::string level))()
{
	if (level == "ERROR")
		return &Harl::error;
	else if (level == "WARNING")
		return &Harl::warning;
	else if (level == "LEVEL")
		return &Harl::info;
	else if (level == "DEBUG")
		return &Harl::debug;
	return &Harl::ok;
}
