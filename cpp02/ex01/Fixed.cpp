/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:40:50 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 00:58:55 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

Fixed::Fixed() : _fixed_val( 0 )
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int num) : _fixed_val( num << _fractional )
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float num) : _fixed_val( roundf(num * (1 << _fractional)) )
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
		this->_fixed_val = obj._fixed_val;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return this->_fixed_val;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_val = raw;
	std::cout << "setRawBits member function called\n";
}

int		Fixed::toInt(void) const
{
	return  this->_fixed_val >> _fractional;
}

float	Fixed::toFloat(void) const
{
	return  this->_fixed_val / static_cast<float>(1 << _fractional);
}

std::ostream &operator<<(std::ostream &ost, const Fixed &obj)
{
	ost << obj.toFloat();
	return ost;
}
