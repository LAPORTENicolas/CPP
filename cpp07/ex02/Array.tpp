/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 21:38:29 by nlaporte          #+#    #+#             */
/*   Updated: 2026/08/19 20:39:58 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

#include <stdexcept>
#include <iostream>

template<typename T>
Array<T>::Array() : _size(0), _arr(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->_arr = new T[n];
	for (unsigned int i=0; i<n; i++)
		this->_arr[i] = T();
}

template <typename T>
Array<T>::Array(const Array &obj) : _size(0)
{
	*this = obj;
}

template <typename T>
Array<T>::~Array()
{
    delete [] this->_arr;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &obj)
{
	if (this == &obj)
		return *this;
	if (this->_arr)
	{
        delete [] this->_arr;
		this->_arr = 0;
	}
	this->_size = obj.size();
	if (this->_size != 0)
	{
	    this->_arr = new T[this->_size];
        for (unsigned int i=0; i<_size; i++)
            this->_arr[i] = T();
	}
	return *this;
}

template <typename T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw std::runtime_error("Array out of bounds");
	return this->_arr[i];
};

template <typename T>
unsigned int Array<T>::size() const
{
	return this->_size;
}
