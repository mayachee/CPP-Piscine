/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:29:45 by mayache-          #+#    #+#             */
/*   Updated: 2025/01/18 20:51:36 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

        // Example usage of the standard stack 's'
        std::cout << "----------" << std::endl;

        //     while (!s.empty()) {
        //         std::cout << s.top() << std::endl; // Print the top element
        //         s.pop(); // Remove the top element
        //     }

        //     std::cout << "size: " << s.size() << std::endl;

        MutantStack<int> stack;

        stack = mstack;
        MutantStack<int>::iterator itt = stack.begin();
        MutantStack<int>::iterator itte = stack.end();
        while (itt != itte)
        {
            std::cout << *itt << std::endl;
            ++itt;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "-------" << std::endl;
        std::list<int> fff;
        fff.push_back(5);
        fff.push_back(17);
        std::cout << "top: " << fff.back() << std::endl;
        fff.pop_back();
        std::cout << "size: " << fff.size() << std::endl;

        fff.push_back(3);
        fff.push_back(5);
        fff.push_back(737);
        fff.push_back(50);
        std::list<int>::iterator it;

        for (it = fff.begin(); it != fff.end(); it++)
        {
            std::cout << *it << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
