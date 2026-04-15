/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 08:36:40 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/01 08:36:41 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define DEFAULT_GRADE 150
#define MIN_GRADE 1
#define MAX_GRADE 150

#include <exception>
#include <string>

class Bureaucrat
{
	int					_grade;
	const std::string	_name;

	public:
		class GradeTooHighException : virtual public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : virtual public std::exception
		{
			public:
				const char *what() const throw();
		};

		Bureaucrat();
		Bureaucrat(const int &grade);
		Bureaucrat(const int &grade, const std::string &name);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		~Bureaucrat();
		const std::string	&getName() const;
		const int			&getGrade() const;
		void				incr_grade();
		void				decr_grade();
};

std::ostream	&operator<<(std::ostream &lhs, const Bureaucrat &rhs);
