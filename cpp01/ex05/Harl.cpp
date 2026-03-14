#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{}

Harl::~Harl()
{}


void	Harl::debug()
{
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	(Harl::*Harl::complain(std::string level))()
{
	std::string	arr_level[4] = {"ERROR", "WARNING", "INFO", "DEBUG"};
	void		(Harl::*arr[4])() = {&Harl::error, &Harl::warning, &Harl::info, &Harl::debug};

	for (int i=0; i<4; i++)
		if (level == arr_level[i])
			return arr[i];
	return NULL;
}
