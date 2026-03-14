/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:40:50 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/14 11:38:13 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

Fixed::Fixed()
{
	this->fixed_val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_val = n << 8;
}

Fixed::Fixed(float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_val = roundf(n * 256.);
}

Fixed::Fixed(const Fixed &obj)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	//std::cout << "Copy assignment constructor called" << std::endl;
	this->fixed_val = obj.fixed_val;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.fixed_val / 256.;
	return out;
}

bool operator<(const Fixed &a, const Fixed &b)
{
	return a.getRawBits() < b.getRawBits();
}

bool operator<=(const Fixed &a, const Fixed &b)
{
	return a.getRawBits() <= b.getRawBits();
}

bool operator>(const Fixed &a, const Fixed &b)
{
	return a.getRawBits() > b.getRawBits();
}

bool operator>=(const Fixed &a, const Fixed &b)
{
	return a.getRawBits() >= b.getRawBits();
}

bool operator==(const Fixed &a, const Fixed &b)
{
	return a.getRawBits() == b.getRawBits();
}

bool operator!=(const Fixed &a, const Fixed &b)
{
	return a.getRawBits() != b.getRawBits();
}

float	operator+(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() + b.getRawBits()) / 256.;
}

float	operator-(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() - b.getRawBits()) / 256.;
}

float	operator*(const Fixed &a, const Fixed &b)
{
	return ((float)a.getRawBits() / 256) * ((float)b.getRawBits() / 256.);
}

float	operator/(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() / 256.) / (b.getRawBits() / 256.);
}

float	operator++(Fixed &a)
{
	a.setRawBits(a.getRawBits() + 1);
	return a.getRawBits() / 256.;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return tmp;
}

float	operator--(Fixed &a)
{
	a.setRawBits(a.getRawBits() - 1);
	return a.getRawBits() / 256.;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return tmp;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return a < b ? (Fixed&)a : (Fixed&)b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return a > b ? (Fixed&)a : (Fixed&)b;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return fixed_val;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_val = raw;
	//std::cout << "setRawBits member function called" << std::endl;
}

int		Fixed::toInt() const
{
	return  this->fixed_val >> 8;
}
