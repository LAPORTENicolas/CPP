/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 11:00:26 by nlaporte          #+#    #+#             */
/*   Updated: 2026/08/19 21:17:20 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main(void)
{
    MutantStack<int> a;

    a.push(10);
    a.push(10);
    a.push(10000);
    int b = a.top();
    (void)it;
    std::cout << "pop " << b << "\n";
    for (MutantStack<int>::iterator it = a.begin();it<a.end();it++)
        std::cout << "it " << *it << "\n";

    return 0;
}
