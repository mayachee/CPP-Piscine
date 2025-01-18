/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:29:57 by mayache-          #+#    #+#             */
/*   Updated: 2025/01/18 20:49:24 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:

        typedef typename std::deque<T>::iterator iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return  this->c.end(); }

        MutantStack() {}
        MutantStack(const MutantStack<T> & src) : std::stack<T>(src) {}
		~MutantStack() {}

        MutantStack<T> &		operator=( const MutantStack<T> & rhs )
		{
			std::stack<T>::operator = (rhs);
			return *this;
		}
};

#endif