/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 00:34:06 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/04 00:47:22 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>

#define	GRADE_SIGN_SHRUBBERY 145
#define	GRADE_EXEC_SHRUBBERY 137

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
   		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	operator=(const ShrubberyCreationForm &rhs);
		void	execute(const Bureaucrat &executor) const;
};
