/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:29:45 by mayache-          #+#    #+#             */
/*   Updated: 2024/11/27 12:10:44 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

// The line std::stack<int> s(mstack); initializes a standard stack s using the contents of the MutantStack object mstack. This means that the elements in mstack are copied into the new stack s.

// Here is a step-by-step explanation:

// MutantStack<int> mstack; creates an instance of MutantStack that holds integers.
// Elements are pushed onto mstack using the push method.
// std::stack<int> s(mstack); creates a new standard stack s and initializes it with the elements from mstack.
// This allows you to use the standard stack functionalities with the elements that were originally in the MutantStack.

// Here's a simplified example:

// int
// In this example, s is a standard stack that contains the same elements as mstack.


// futeares of containers
// stack: LIFO, no iterators, no access to elements, no insertions or deletions except at the top.
// queue: FIFO, no iterators, no access to elements, no insertions or deletions except at the front and back.
// vector:  Dynamic array, iterators available, allows insertions and deletions at any position.
// deque: It allows for efficient insertion and deletion of elements at both the front and the back.
// It also supports random access to elements, similar to std::vector

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

        while (!s.empty()) {
            std::cout << s.top() << std::endl; // Print the top element
            s.pop(); // Remove the top element
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
