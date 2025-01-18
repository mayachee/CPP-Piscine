/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:50:39 by mayache-          #+#    #+#             */
/*   Updated: 2025/01/18 20:21:05 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <iostream>

class Span {
    private:
        unsigned int max_size;
        std::vector<int> numbers;

    public:
        // Constructor
        Span(unsigned int N);
        Span();
        // Copy constructor
        Span(const Span &other);
        // Destructor
        ~Span();
        // Assignment operator
        Span &operator=(const Span &other);
        
        // Methods to add numbers
        void addNumber(int number);
        
        template <typename input>
        void    addNumbers(input begin, input end)
        {
            while (begin != end)
            {
                std::cout << *begin << std::endl;
                this->addNumber(*begin);
                ++begin;
            }
        }

        void display_table(std::vector<int>& numbers);
        std::vector<int> ft_sorted(std::vector<int> numbers);

        // Methods to find spans
        int shortestSpan();
        int longestSpan();
        // Add getter methods
        std::vector<int>& getNumbers();
};

#endif
