/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 13:01:03 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 01:58:18 by nlaporte         ###   ########.fr       */
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
		Point(const float x, const float y);
		t_vec2	get_vec() const;
		~Point();
};
