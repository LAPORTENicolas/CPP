/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 08:37:59 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/04 00:50:15 by nlaporte         ###   ########.fr       */
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

class AForm
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
		
		class NoSignedException: virtual public std::exception
		{
			public:
				const char *what() const throw();
		};
		
		AForm();
		AForm(const std::string &name, const int &gradeToSign, const int &gradeToExec);
		AForm(const AForm &rhs);
		virtual ~AForm() = 0;
		AForm	&operator=(const AForm &rhs);
		void	beSigned(const Bureaucrat &obj);
		virtual void		execute(const Bureaucrat &executor) const;
		const std::string	&getName() const;
		const bool			&isSigned();
		const int			&getGradeToSign();
		const int			&getGradeToExec();
};

std::ostream	&operator<<(std::ostream &lhs, AForm &rhs);
