/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 23:04:55 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/08 23:16:22 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	bA(MAX_GRADE, "Bureaucrat-A");
	Bureaucrat	bB(MIN_GRADE, "Bureaucrat-A");
	{
		std::cout << "ShrubberyCreationForm\n";
		ShrubberyCreationForm shrubbery("1");
		bA.signForm(shrubbery);
		bB.signForm(shrubbery);
		bB.signForm(shrubbery);
		bA.executeForm(shrubbery);
		bB.executeForm(shrubbery);
		std::cout << "\n";
	}
	{
		std::cout << "RobotomyRequestForm\n";
		RobotomyRequestForm	robotomy("1");
		bA.signForm(robotomy);
		bB.signForm(robotomy);
		bB.signForm(robotomy);
		bA.executeForm(robotomy);
		bB.executeForm(robotomy);
		std::cout << "\n";
	}
	{
		std::cout << "PresidentialPardonForm\n";
		PresidentialPardonForm presidential("1");
		bA.signForm(presidential);
		bB.signForm(presidential);
		bB.signForm(presidential);
		bA.executeForm(presidential);
		bB.executeForm(presidential);
		std::cout << "\n";
	}
	return 0;
}
