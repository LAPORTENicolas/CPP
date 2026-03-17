/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 20:59:25 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 20:59:27 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point	ab = a - b;
	Point	bc = b - c;
	Point	ca = c - a;
	Point	tmp;
	float	r;
	
	if (Point::cross_vec(ab, ca) == 0) return false;
	tmp = point - a;
	r = Point::cross_vec(ab, tmp);
	if (r > 0)
	{
		tmp = point - b;
		r = Point::cross_vec(bc, tmp);
		if (r < 0) return false;
		tmp = point - c;
		r = Point::cross_vec(ca, tmp);
		return !(r < 0);
	}
	if (r < 0)
	{
		tmp = point - b;
		r = Point::cross_vec(bc, tmp);
		if (r > 0) return false;
		tmp = point - c;
		r = Point::cross_vec(ca, tmp);
		return !(r > 0);
	}
	return false;
}
