/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 08:37:13 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/01 08:37:14 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

void	make_test(const int &grade)
{
	try
	{
		Bureaucrat a(grade);
	}
	catch (const Bureaucrat::GradeTooHighException &err)
	{
		std::cout << err.what() << "\n";
	}
	catch (const Bureaucrat::GradeTooLowException &err)
	{
		std::cout << err.what() << "\n";
	}
}

void	make_test2(Bureaucrat a)
{
	try
	{
		while (1)
		{
			std::cout << a << "\n";
			a.decr_grade();
		}
	}
	catch (const Bureaucrat::GradeTooHighException &err)
	{
		std::cout << err.what() << "\n";
	}
	catch (const Bureaucrat::GradeTooLowException &err)
	{
		std::cout << err.what() << "\n";
	}
}

void	make_test3(Bureaucrat a)
{
	try
	{
		while (1)
		{
			std::cout << a << "\n";
			a.incr_grade();
		}
	}
	catch (const Bureaucrat::GradeTooHighException &err)
	{
		std::cout << err.what() << "\n";
	}
	catch (const Bureaucrat::GradeTooLowException &err)
	{
		std::cout << err.what() << "\n";
	}
}

int	main(void)
{
	Form		formA("Form-A", 149, 140);
	Bureaucrat	BureaucratA(150, "Bureaucrat-A");
	Bureaucrat	BureaucratB(149, "Bureaucrat-B");
	Bureaucrat	BureaucratC(10, "Bureaucrat-C");

	std::cout << formA << "\n";
	std::cout << BureaucratA << "\n";
	std::cout << BureaucratB << "\n";
	std::cout << BureaucratC << "\n\n";
	BureaucratA.signForm(formA);
	BureaucratB.signForm(formA);
	BureaucratC.signForm(formA);
	std::cout << "\n" << formA << "\n";
	return 1;
}
