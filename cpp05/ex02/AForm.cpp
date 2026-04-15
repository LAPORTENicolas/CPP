/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 08:47:33 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/01 09:02:52 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>

AForm::AForm() : _name("unamed form"), _signed(false), _gradeToSigne(DEFAULT_GRADE_TO_SIGN), _gradeToExec(DEFAULT_GRADE_TO_EXEC)
{}

AForm::AForm(const std::string &name, const int &gradeToSign, const int &gradeToExec) : _name(name), _signed(false), _gradeToSigne(gradeToSign), _gradeToExec(gradeToExec)
{
}

AForm::AForm(const AForm &rhs) : _name(rhs._name), _signed(rhs._signed), _gradeToSigne(rhs._gradeToSigne), _gradeToExec(rhs._gradeToExec)
{}

AForm::~AForm()
{}

AForm	&AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return *this;
}

void	AForm::beSigned(const Bureaucrat &obj)
{
	if (this->_signed)
		throw AForm::AlreadySignedException();
	if (obj.getGrade() > this->_gradeToSigne)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

const std::string	&AForm::getName() const
{
	return this->_name;
}

const bool			&AForm::isSigned()
{
	return this->_signed;
}

const int			&AForm::getGradeToSign()
{
	return this->_gradeToSigne;
}

const int			&AForm::getGradeToExec()
{
	return this->_gradeToExec;
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high\n";
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low\n";
}

const char	*AForm::AlreadySignedException::what() const throw()
{
	return "Form is already signed\n";
}

const char	*AForm::NoSignedException::what() const throw()
{
	return "Form is not signed\n";
}

void	AForm::execute(const Bureaucrat &executor) const
{
	if (!this->_signed)
		throw AForm::NoSignedException();
	if (executor.getGrade() > this->_gradeToSigne)
		throw AForm::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &lhs, AForm &rhs)
{
	return lhs << "\33[33m[DEBUG]\033[37m " << "AForm " << rhs.getName() << ", signed: " << rhs.isSigned() << ", gradeToSign: " << rhs.getGradeToSign() << ", gradeToExec: " << rhs.getGradeToExec();
}
