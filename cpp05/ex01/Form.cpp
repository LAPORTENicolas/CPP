/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 08:47:33 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/01 09:02:52 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <ostream>

Form::Form() : _name("unamed form"), _signed(false), _gradeToSigne(DEFAULT_GRADE_TO_SIGN), _gradeToExec(DEFAULT_GRADE_TO_EXEC)
{}

Form::Form(const std::string &name, const int &gradeToSign, const int &gradeToExec) : _name(name), _signed(false), _gradeToSigne(gradeToSign), _gradeToExec(gradeToExec)
{
}

Form::Form(const Form &rhs) : _name(rhs._name), _signed(rhs._signed), _gradeToSigne(rhs._gradeToSigne), _gradeToExec(rhs._gradeToExec)
{}

Form::~Form()
{}

Form	&Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return *this;
}

void	Form::beSigned(const Bureaucrat &obj)
{
	if (this->_signed)
		throw Form::AlreadySignedException();
	if (obj.getGrade() > this->_gradeToSigne)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

const std::string	&Form::getName()
{
	return this->_name;
}

const bool			&Form::isSigned()
{
	return this->_signed;
}

const int			&Form::getGradeToSign()
{
	return this->_gradeToSigne;
}

const int			&Form::getGradeToExec()
{
	return this->_gradeToExec;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high\n";
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low\n";
}

const char	*Form::AlreadySignedException::what() const throw()
{
	return "Form is already signed\n";
}

std::ostream	&operator<<(std::ostream &lhs, Form &rhs)
{
	return lhs << "Form " << rhs.getName() << ", signed: " << rhs.isSigned() << ", gradeToSign: " << rhs.getGradeToSign() << ", gradeToExec: " << rhs.getGradeToExec();
}
