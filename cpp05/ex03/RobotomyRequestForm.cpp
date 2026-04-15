/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 00:36:58 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/04 00:49:22 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() : AForm("_shrubbery", GRADE_SIGN_ROBOTOMY, GRADE_EXEC_ROBOTOMY)
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(target + "_shrubbery", GRADE_SIGN_ROBOTOMY, GRADE_EXEC_ROBOTOMY)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm	RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	this->AForm::execute(executor);
	std::srand(std::time(0));
	if (std::rand() % 2 == 0)
		std::cout << this->getName() << " has been has been robotomized\n";
	else
		std::cout << "robotomize echec for " << this->getName() << "\n";
}
