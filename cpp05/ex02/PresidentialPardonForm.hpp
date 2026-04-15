/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 00:34:06 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/08 23:13:12 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>

#define	GRADE_SIGN_PRESIDENTIAL 25
#define	GRADE_EXEC_PRESIDENTIAL 5

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
   		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		~PresidentialPardonForm();
		PresidentialPardonForm	operator=(const PresidentialPardonForm &rhs);
		void	execute(const Bureaucrat &executor) const;
};
