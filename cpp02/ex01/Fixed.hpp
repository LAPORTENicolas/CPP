/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:34:45 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 14:12:57 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef  _FIXED_H__
# define _FIXED_H__

# include <ostream>

class Fixed
{
	static const int	fractional = 8;
	int					fixed_val;

	public:
		Fixed();
		Fixed(int);
		Fixed(float);
		Fixed(const Fixed&);
		~Fixed();
		Fixed				&operator=(const Fixed&);
		friend std::ostream &operator<<(std::ostream&, const Fixed&);
		int					toInt(void) const;
		float				toFloat(void) const;
		int					getRawBits(void) const;
		void				setRawBits(int const);
};

#endif //_FIXED_H__
