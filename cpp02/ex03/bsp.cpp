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
	t_vec2	p = point.get_vec();
	t_vec2	a_vec = a.get_vec();
	t_vec2	b_vec = b.get_vec();
	t_vec2	c_vec = c.get_vec();
	t_vec2	ab = (t_vec2){a_vec.x - b_vec.x, a_vec.y - b_vec.y};
	t_vec2	bc = (t_vec2){b_vec.x - c_vec.x, b_vec.y - c_vec.y};
	t_vec2	ca = (t_vec2){c_vec.x - a_vec.x, c_vec.y - a_vec.y};
	t_vec2	tmp;
	float	r;
	
	if ((ab.x * ca.y) - (ab.y * ca.x) == 0) return false;
	tmp = (t_vec2){p.x - a_vec.x, p.y - a_vec.y};
	r = ab.x * tmp.y - ab.y * tmp.x;
	if (r > 0)
	{
		tmp = (t_vec2){p.x - b_vec.x, p.y - b_vec.y};
		r = (bc.x * tmp.y - bc.y * tmp.x);
		if (r < 0) return false;
		tmp = (t_vec2){p.x - c_vec.x, p.y - c_vec.y};
		r = (ca.x * tmp.y - ca.y * tmp.x);
		return !(r < 0);
	}
	if (r < 0)
	{
		tmp = (t_vec2){p.x - b_vec.x, p.y - b_vec.y};
		r = (bc.x * tmp.y - bc.y * tmp.x);
		if (r > 0) return false;
		tmp = (t_vec2){p.x - c_vec.x, p.y - c_vec.y};
		r = (ca.x * tmp.y - ca.y * tmp.x);
		return !(r > 0);
	}
	return false;
}
