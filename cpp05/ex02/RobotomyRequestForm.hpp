/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
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

#define	GRADE_SIGN_ROBOTOMY 72
#define	GRADE_EXEC_ROBOTOMY 45

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		~RobotomyRequestForm();
		RobotomyRequestForm	operator=(const RobotomyRequestForm &rhs);
		void	execute(const Bureaucrat &executor) const;
};
