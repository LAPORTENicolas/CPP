/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 00:36:58 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/04 00:49:22 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>
#include <ios>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("_shrubbery", GRADE_SIGN_SHRUBBERY, GRADE_EXEC_SHRUBBERY)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(target + "_shrubbery", GRADE_SIGN_SHRUBBERY, GRADE_EXEC_SHRUBBERY)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	this->AForm::execute(executor);
	std::fstream infile;
	infile.exceptions(std::ios_base::badbit | std::ios_base::failbit);
	infile.open(this->getName().c_str(), std::ios_base::out);
	infile << "      __\n";
	infile << "     /||\\\n";
	infile << "    /=||=\\ \n";
	infile << "   /==||==\\ \n";
	infile << "  /===||===\\ \n";
	infile << "      || \n";
	infile << "      || \n";
	infile << "      || \n";
	infile.close();
}
