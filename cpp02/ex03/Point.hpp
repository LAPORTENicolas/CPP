/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 13:01:03 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/13 12:40:08 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _POINT_H__
# define _POINT_H__

#include "Fixed.hpp"

class Point
{
	const Fixed	x;
	const Fixed	y;

	public:
		Point();
		Point(const Point&);
		Point	&operator=(const Point&);
		Point(const float, const float);
		t_vec2	get_vec() const;
		~Point();
};

#endif // _POINT_H__
