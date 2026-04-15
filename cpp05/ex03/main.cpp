/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 23:04:55 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/15 20:36:18 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <exception>
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
	{
		std::cout << "Intern\n";
		Intern	iA;
		AForm	*shr, *pres, *robo;
		shr = iA.makeForm("shrubbery creation", "shrubbery");
		robo = iA.makeForm("robotomy request", "target-lol");
		pres = iA.makeForm("presidential pardon", "presidential");
		bA.signForm(*shr);
		bB.signForm(*shr);
		bA.executeForm(*shr);
		bB.executeForm(*shr);
		bA.signForm(*pres);
		bB.signForm(*pres);
		bA.executeForm(*pres);
		bB.executeForm(*pres);
		bA.signForm(*robo);
		bB.signForm(*robo);
		bA.executeForm(*robo);
		bB.executeForm(*robo);
		delete shr;
		delete pres;
	   	delete robo;
		std::cout << "\n";
	}
	return 0;
}
