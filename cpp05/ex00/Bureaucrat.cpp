/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 08:36:28 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/01 08:36:28 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <fstream>
#include <string>

Bureaucrat::Bureaucrat() : _grade(DEFAULT_GRADE), _name("Default bureaucrat")
{}

Bureaucrat::Bureaucrat(const int &grade) : _grade(grade), _name("Parameter bureaucrat")
{
	if (this->_grade < MIN_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > MAX_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const int &grade, const std::string &name) : _grade(grade), _name(name)
{
	if (this->_grade < MIN_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > MAX_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _grade(obj._grade), _name(obj._name)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat			&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
		//this->_name = rhs._name;
	}
	return *this;
}

const std::string	&Bureaucrat::getName() const
{
	return this->_name;
}

const int			&Bureaucrat::getGrade() const
{
	return this->_grade;
}

void				Bureaucrat::incr_grade()
{
	if (this->_grade - 1 < MIN_GRADE)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void				Bureaucrat::decr_grade()
{
	if (this->_grade + 1 > MAX_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

const char			*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error Bureaucrat grade is to high";
}

const char			*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error Bureaucrat grade is to low";
}

std::ostream		&operator<<(std::ostream &lhs, const Bureaucrat &rhs)
{
	return lhs << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
}
