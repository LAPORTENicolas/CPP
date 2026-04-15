/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:21:55 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/15 20:01:48 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class AForm;

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &obj);
		Intern &operator=(const Intern &obj);
		AForm *makeForm(const std::string &type, const std::string &target);
		AForm *createRobotomyForm(const std::string &targer);
		AForm *createPresidentialForm(const std::string &targer);
		AForm *createShrubberyForm(const std::string &targer);
};
