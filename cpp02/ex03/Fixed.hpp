/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:34:45 by nlaporte          #+#    #+#             */
/*   Updated: 2026/02/20 13:40:56 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <fstream>
#include <ostream>
#ifndef  _FIXED_H__
# define _FIXED_H__

#include <string>

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
		friend bool			operator<(const Fixed&, const Fixed&);
		friend bool			operator<=(const Fixed&, const Fixed&);
		friend bool			operator>(const Fixed&, const Fixed&);
		friend bool			operator>=(const Fixed&, const Fixed&);
		friend bool			operator==(const Fixed&, const Fixed&);
		friend bool			operator!=(const Fixed&, const Fixed&);
		friend float		operator+(const Fixed&, const Fixed&);
		friend float		operator-(const Fixed&, const Fixed&);
		friend float		operator*(const Fixed&, const Fixed&);
		friend float		operator/(const Fixed&, const Fixed&);
		Fixed				operator++(int);
		friend float		operator++(Fixed&);
		Fixed				operator--(int);
		friend float		operator--(Fixed&);
		static Fixed		&min(Fixed&, Fixed&);
		static Fixed		&min(const Fixed&, const Fixed&);
		static Fixed		&max(Fixed&, Fixed&);
		static Fixed		&max(const Fixed&, const Fixed&);
		//friend float		++operator(const Fixed&);
		int					toInt() const;
		int					getRawBits(void) const;
		void				setRawBits(int const);
};


typedef struct s_vec2
{
	Fixed	x;
	Fixed	y;
}	t_vec2;

#endif //_FIXED_H__
