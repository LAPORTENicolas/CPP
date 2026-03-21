/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 20:02:16 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/20 03:03:28 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor\n";
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor\n";
	*this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat copy assignement\n";
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "MMMiiiaaaooooouuuuu\n";
}
