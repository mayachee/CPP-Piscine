/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:29:45 by mayache-          #+#    #+#             */
/*   Updated: 2024/11/28 15:53:14 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main()
{

    try
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << "top: " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "size: " << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(50);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        // std::stack does not support iterators.
        // Instead, you should use the iterators directly with the MutantStack object.
        std::stack<int> s(mstack);

        // // Example usage of the standard stack 's'
        // std::cout << "----------" << std::endl;

        // while (!s.empty()) {
        //     std::cout << s.top() << std::endl; // Print the top element
        //     s.pop(); // Remove the top element
        // }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        // MutantStack<int> mstack;
        std::list<int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << "top: " << mstack.back() << std::endl;
        mstack.pop_back();
        std::cout << "size: " << mstack.size() << std::endl;

        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(50);
            std::list<int>::iterator it;

    // Use the iterator to traverse the list
    for (it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << std::endl; // Dereference the iterator to access the element
    }
    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
