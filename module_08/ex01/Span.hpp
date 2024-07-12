/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:50:39 by mayache-          #+#    #+#             */
/*   Updated: 2024/07/12 19:55:41 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <limits>
#include <iostream>

class Span {
    private:
        unsigned int max_size;
        std::vector<int> numbers;

    public:
        // Constructor
        Span(unsigned int N);
        // Copy constructor
        Span(const Span &other);
        // Destructor
        ~Span();
        // Assignment operator
        Span &operator=(const Span &other);
        
        // Methods to add numbers
        void addNumber(int number);
        // Methods to find spans
        int shortestSpan() const;
        int longestSpan() const;
};

#endif
