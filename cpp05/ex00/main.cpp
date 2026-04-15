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
	const int grade_list[] = {-10, 0, 151, 420, 150, 1, 41};

	for (int i=0; i<6; i++)
	{
		std::cout << "Test for grade " << grade_list[i] << "\n";
		make_test(grade_list[i]);
	  	std::cout << "End\n\n";
	}

	Bureaucrat a(MAX_GRADE - 5, "Bureaucrat a");
	make_test2(a);
	Bureaucrat b(MIN_GRADE + 5, "Bureaucrat b");
	make_test3(b);

	std::cout << a << "\n";
	std::cout << b << "\n";
	return 1;
}
