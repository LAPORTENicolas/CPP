/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:40:50 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 20:56:19 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

Fixed::Fixed() : _fixed_val( 0 )
{
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int num) : _fixed_val( num << 8 ) 
{
	//std::cout << "Int constructor called\n";
}

Fixed::Fixed(float n) : _fixed_val( roundf(n * 256.) )
{
	//std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &obj)
{
	//std::cout << "Copy constructor called\n";
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	//std::cout << "Copy assignment operator called\n";
	if (this != &obj)
		this->_fixed_val = obj._fixed_val;
	return *this;
}

std::ostream &operator<<(std::ostream &ost, const Fixed &obj)
{
	ost << obj.toFloat();
	return ost;
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return this->getRawBits() != rhs.getRawBits();
}

float	Fixed::operator+(const Fixed &rhs) const
{
	return (this->getRawBits() + rhs.getRawBits()) / 256.;
}

float	Fixed::operator-(const Fixed &rhs) const
{
	return (this->getRawBits() - rhs.getRawBits()) / 256.;
}

float	Fixed::operator*(const Fixed &rhs) const
{
	return this->toFloat() * rhs.toFloat();
}

float	Fixed::operator/(const Fixed &rhs) const
{
	return this->toFloat() / rhs.toFloat();
}

float	Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return this->toFloat();
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return tmp;
}

float	Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return this->toFloat();
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return tmp;
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	return lhs < rhs ? lhs : rhs;
}

Fixed	&Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	return lhs < rhs ? (Fixed &)lhs : (Fixed &)rhs;
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	return lhs > rhs ? lhs : rhs;
}

Fixed	&Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	return lhs > rhs ? (Fixed &)lhs : (Fixed&)rhs;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}

int	Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called\n";
	return this->_fixed_val;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_val = raw;
	//std::cout << "setRawBits member function called\n";
}

int		Fixed::toInt() const
{
	return  this->_fixed_val >> 8;
}

float	Fixed::toFloat(void) const
{
	return  this->_fixed_val / 256.;
}

