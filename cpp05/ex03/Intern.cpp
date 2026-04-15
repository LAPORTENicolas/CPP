/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:24:40 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/15 20:18:56 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class AForm;
typedef AForm *(Intern::*formPtr)(const std::string &target);

Intern::Intern()
{}

Intern::~Intern()
{}

Intern::Intern(const Intern &obj)
{
	if (this != &obj)
	{
		return ;
	}
}

Intern &Intern::operator=(const Intern &obj)
{
	(void)obj;
	return *this;
}

AForm	*Intern::createShrubberyForm(const std::string &target)
{
	AForm	*form = new ShrubberyCreationForm(target);
	return form;
}

AForm	*Intern::createPresidentialForm(const std::string &target)
{
	AForm	*form = new PresidentialPardonForm(target);
	return form;
}

AForm	*Intern::createRobotomyForm(const std::string &target)
{
	AForm	*form = new RobotomyRequestForm(target);
	return form;
}

AForm	*Intern::makeForm(const std::string &type, const std::string &target)
{
	const std::string	formType[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	const formPtr		formFun[3] = {&Intern::createShrubberyForm, &Intern::createRobotomyForm, &Intern::createPresidentialForm};

	for (int i=0;i<3;i++)
	{
		if (type == formType[i])
			return ((*this).*formFun[i])(target);
	}
	return NULL;
}
