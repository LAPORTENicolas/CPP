/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 08:37:59 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/01 09:03:06 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#define DEFAULT_GRADE_TO_SIGN 100
#define DEFAULT_GRADE_TO_EXEC 50
#define MIN_GRADE 1
#define MAX_GRADE 150

#include <exception>
#include <ostream>
#include <string>

class Form
{
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSigne;
	const int			_gradeToExec;
	
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		
		class AlreadySignedException: virtual public std::exception
		{
			public:
				const char *what() const throw();
		};

		Form();
		Form(const std::string &name, const int &gradeToSign, const int &gradeToExec);
		Form(const Form &rhs);
		~Form();
		Form	&operator=(const Form &rhs);
		void	beSigned(const Bureaucrat &obj);
		const std::string	&getName();
		const bool			&isSigned();
		const int			&getGradeToSign();
		const int			&getGradeToExec();
};

std::ostream	&operator<<(std::ostream &lhs, Form &rhs);
