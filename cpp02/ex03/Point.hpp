/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 13:01:03 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/17 06:46:25 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
	const Fixed	_x;
	const Fixed	_y;

	public:
		Point();
		Point(const Point &obj);
		Point	&operator=(const Point &obj);
		Point	operator-(const Point &rhs) const;
		Point(const float x, const float y);
		Point(const Fixed x, const Fixed y);
		static float	cross_vec(const Point x, const Point y);
		~Point();
};
