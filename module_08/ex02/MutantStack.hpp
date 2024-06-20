/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:29:57 by mayache-          #+#    #+#             */
/*   Updated: 2024/06/20 15:59:20 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        // Constructor
        // MutantStack();
        // Copy constructor
        // MutantStack(const MutantStack &other);
        // Assignment operator
        // MutantStack &operator=(const MutantStack &other);
        // Destructor
        // ~MutantStack();

        MutantStack() : std::stack<T>() {}
        typedef typename std::deque<T>::iterator iterator;
        
        iterator begin() { return this->c.begin();}
        iterator end() { return  this->c.end(); }
};

#endif