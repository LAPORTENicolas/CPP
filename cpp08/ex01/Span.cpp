/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 22:45:08 by nlaporte          #+#    #+#             */
/*   Updated: 2026/08/19 20:54:36 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <cstdlib>
#include <stdexcept>
#include <limits.h>
#include <iostream>
#include <vector>

Span::Span()
{}

Span::Span(unsigned int n) : _N(n)
{}

Span::~Span()
{}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span	&Span::operator=(const Span &obj)
{
	if (this == &obj)
		return *this;
	this->_vec.clear();
	this->_N = obj._N;
	std::vector<int> vec = obj.getVec();
	std::vector<int>::iterator ite = vec.begin();
	std::vector<int>::iterator end = vec.end();
	for (;ite<end;ite++)
		this->_vec.push_back(*ite);
	return *this;
}

void	Span::addNumber(int n)
{
	if (this->_vec.size() >= this->_N)
		throw std::runtime_error("container full");
	std::vector<int>::iterator test = std::lower_bound(this->_vec.begin(), this->_vec.end(), n);
	if (test != this->_vec.end() && *test == n)
		throw std::runtime_error("value already inside");
	this->_vec.insert(test, n);
}

void	Span::addRange(int n[], unsigned int size)
{
	std::vector<int>::iterator ite;

	for (unsigned int i=0; i<size; i++)
	{
		ite = std::lower_bound(this->_vec.begin(), this->_vec.end(), n[i]);
		if (ite != this->_vec.end() && *ite == n[i])
			throw std::runtime_error("value already inside");
		this->_vec.insert(ite, n[i]);
	}
}
void	Span::debug()
{
	std::vector<int>::iterator ite, end = this->_vec.end();

	for (ite=this->_vec.begin(); ite<end; ite++)
	{
	  std::cout << *ite << "\n";
	}
}

long	Span::shortestSpan()
{
	if (this->_vec.size() <= 1)
		throw std::runtime_error("no span can be found");
	long	distance = LONG_MAX;
	std::vector<int>::iterator ite1, ite2, end = this->_vec.end() - 1;
	for (ite1 = this->_vec.begin(); ite1 < end; ite1++)
	{
		if (distance > std::abs(*ite1 - *(ite1 + 1)))
			distance = std::abs(*ite1 - *(ite1 + 1));
	}
	return distance;
}

long	Span::longestSpan()
{
	if (this->_vec.size() <= 1)
		throw std::runtime_error("no span can be found");
	long	distance =  std::abs(this->_vec.back() - this->_vec.front());
	//std::cout << "longest distance: " << distance << "\n";
	return distance;
}

const std::vector<int>	&Span::getVec() const
{
	return this->_vec;
}
