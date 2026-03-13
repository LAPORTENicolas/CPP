/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 13:00:53 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/10 08:52:17 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x( 0 ), y( 0 )
{}

Point::Point(const float x, const float y) : x( Fixed(x) ), y( Fixed(y) )
{}

Point::Point(const Point &p)
{
	*this = p;
}

Point	&Point::operator=(const Point &p)
{
	if (this != &p)
		*this = p;
	return *this;
}

Point::~Point()
{}

t_vec2	Point::get_vec() const
{
	return (t_vec2){this->x, this->y};
}
