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

t_vec2	Point::get_vec() const
{
	return (t_vec2){this->_x, this->_y};
}
