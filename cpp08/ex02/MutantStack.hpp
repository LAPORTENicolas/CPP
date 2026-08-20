/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 11:00:39 by nlaporte          #+#    #+#             */
/*   Updated: 2026/08/19 21:17:35 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iterator>
#include <stack>
#include <vector>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack();
    void push(const T &rhs);
    void pop();
    int *begin();
    int *end();

    const T &top();
    class iterator// : public std::iterator<std::input_iterator_tag, int>
    {
        int* p;
    public:
        iterator(void) : p(0) {std::cout << "default constructor\n";};
        iterator(int* x) :p(x) {std::cout << "ptr constructor\n";}
        iterator(const iterator& mit) : p(mit.p) {std::cout << "ptr constructor\n";}
        iterator& operator++() {++p;return *this;}
        iterator operator++(int) {iterator tmp(*this); operator++(); return tmp;}
        bool operator==(const iterator& rhs) const {return p==rhs.p;}
        bool operator!=(const iterator& rhs) const {return p!=rhs.p;}
        void operator=(const iterator& rhs) const {std::cout << "assign val\n"; this->p = rhs;}
        int& operator*() {std::cout << "lol\n"; return *p;}
        //int *getite() {return p;}
    };

    std::vector<T> debug_arr();
private:
    std::vector<T> _arr;
};


#include "MutantStack.tpp"
