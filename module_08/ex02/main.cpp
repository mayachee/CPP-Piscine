/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:29:45 by mayache-          #+#    #+#             */
/*   Updated: 2024/06/20 15:03:19 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main() {

    try
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << "top :" << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "size :" << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << "--> " << *it << std::endl;
            ++it;
        }
        
        std::stack<int> s(mstack);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "----------" << std::endl;
    try
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(257);
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        std::cout << "top :" << mstack.top() << std::endl;
        std::cout << "size :" << mstack.size() << std::endl;

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << "--> " << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
