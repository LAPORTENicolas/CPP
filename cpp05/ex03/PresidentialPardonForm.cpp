/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 00:36:58 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/15 20:28:25 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("_shrubbery", GRADE_SIGN_PRESIDENTIAL, GRADE_EXEC_PRESIDENTIAL)
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm(target + "_shrubbery", GRADE_SIGN_PRESIDENTIAL, GRADE_EXEC_PRESIDENTIAL)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm	PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->AForm::execute(executor);
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblerox\n";
}
