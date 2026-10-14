/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:31:19 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/10/14 14:47:28 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main()
{
    std::cout << "=== MUTANTSTACK TEST ===" << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top element: " << mstack.top() << std::endl;
    
    mstack.pop();
    
    std::cout << "Size after pop: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    
    std::cout << "Stack contents (bottom to top):" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    // Prove it is still a valid std::stack
    std::stack<int> s(mstack);


    std::cout << "\n=== STD::LIST COMPARISON ===" << std::endl;
    std::list<int> lstack;

    lstack.push_back(5);
    lstack.push_back(17);

    std::cout << "Top element: " << lstack.back() << std::endl;

    lstack.pop_back();

    std::cout << "Size after pop: " << lstack.size() << std::endl;

    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    lstack.push_back(0);

    std::list<int>::iterator lit = lstack.begin();
    std::list<int>::iterator lite = lstack.end();

    ++lit;
    --lit;
    
    std::cout << "List contents (bottom to top):" << std::endl;
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }


    std::cout << "\n=== REVERSE ITERATOR TEST ===" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();

    std::cout << "Stack contents (top to bottom):" << std::endl;
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }

    return 0;
}