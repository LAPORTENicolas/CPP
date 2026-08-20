/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 22:42:55 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/26 00:02:11 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_H__
#define _SPAN_H__

#define SHORT_STEP 500

#include <vector>

class Span
{
	std::vector<int>	_vec;
	unsigned int		_N;
	Span();

	public:
		Span(unsigned int n);
		Span(const Span &obj);
		~Span();
		Span	&operator=(const Span &obj);
		void	addNumber(int n);
		void	addRange(int n[], unsigned int size);
		long	shortestSpan();
		long	longestSpan();
		void	debug();
		const std::vector<int> &getVec() const;
};

#endif //_SPAN_H__
