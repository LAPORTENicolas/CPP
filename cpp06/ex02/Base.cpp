/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:52:51 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/23 20:20:32 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

Base::~Base()
{}

Base	*Base::generate(void)
{
	std::srand(std::time(NULL));
	int		x = std::rand();
	Base	*ptr = 0;

	switch (x % 3)
	{
		case 0:
			ptr = new A();
			std::cout << "\033[35m[INFO]\033[0;37m Create A obj\n";
			break;

		case 1:
			ptr = new B();
			std::cout << "\033[35m[INFO]\033[0;37m Create B obj\n";
			break;

		case 2:
			ptr = new C();
			std::cout << "\033[35m[INFO]\033[0;37m Create C obj\n";
			break;
	}
	return ptr;
}

void	Base::identify(Base *p)
{
	if (dynamic_cast<A*>(p) != 0)
		std::cout << "A\n";
	if (dynamic_cast<B*>(p) != 0)
		std::cout << "B\n";
	if (dynamic_cast<C*>(p) != 0)
		std::cout << "C\n";
}

void	Base::identify(Base &p)
{
	try
	{
		Base &tmp = dynamic_cast<A&>(p);
		std::cout << "A\n";
		(void)tmp;
	}
	catch (...) {}
	try
	{
		Base &tmp = dynamic_cast<B&>(p);
		std::cout << "B\n";
		(void)tmp;
	}
	catch (...) {}
	try
	{
		Base &tmp = dynamic_cast<C&>(p);
		std::cout << "C\n";
		(void)tmp;
	}
	catch (...) {}
}
