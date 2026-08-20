/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 11:47:43 by nlaporte          #+#    #+#             */
/*   Updated: 2026/08/19 21:17:56 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iterator>
#include <stack>
#include <vector>

#include <iostream>

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{};

template <typename T>
const T &MutantStack<T>::top()
{
    return this->stack::top();
}

template <typename T>
void MutantStack<T>::pop()
{
    if (_arr.begin() != _arr.end())
        _arr.erase(_arr.begin());
    this->stack::pop();
}

template <typename T>
void MutantStack<T>::push(const T &rhf)
{
    this->stack::push(rhf);
    _arr.push_back(rhf);
}

template <typename T>
int *MutantStack<T>::begin()
{
    return &(*_arr.begin());
    //return 0;
    //return this->iterator
}

template <typename T>
int *MutantStack<T>::begin()
{
    return &(*_arr.end());
    //return 0;
    //return this->iterator
}

/*
template <typename T>
std::vector<T> MutantStack<T>::debug_arr()
{
    return _arr;
}
*/
