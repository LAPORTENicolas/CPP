/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 13:00:53 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 02:03:17 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x( 0 ), _y( 0 )
{}

Point::Point(const float x, const float y) : _x( Fixed(x) ), _y( Fixed(y) )
{}

Point::Point(const Fixed x, const Fixed y) : _x( x ), _y( y )
{}

Point::Point(const Point &obj)
{
	*this = obj;
}

Point	&Point::operator=(const Point &obj)
{
	if (this != &obj)
	{
		(Fixed&)this->_x = obj._x;
		(Fixed&)this->_y = obj._y;
	}
	return *this;
}

Point::~Point()
{}

Point Point::operator-(const Point &rhs) const
{
	Fixed x = this->_x - rhs._x;
	Fixed y = this->_y - rhs._y;
	
	Point p = Point(x, y);
	return p;
}

float	Point::cross_vec(const Point a, const Point b)
{
	Fixed p;

	p = a._x.toFloat() * b._y.toFloat() - a._y.toFloat() * b._x.toFloat();
	return p.toFloat();
}
