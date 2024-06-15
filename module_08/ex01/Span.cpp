/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:50:42 by mayache-          #+#    #+#             */
/*   Updated: 2024/06/15 00:11:00 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructor
Span::Span(unsigned int N) : max_size(N) {}

// Copy constructor
Span::Span(const Span &other) {
    *this = other;
}

// Assignment operator
Span &Span::operator=(const Span &other) {
    if (this != &other) {
        max_size = other.max_size;
        numbers = other.numbers;
    }
    return *this;
}

// Destructor
Span::~Span() {}

// Method to add a single number
void Span::addNumber(int number) {
    // std::cout << "--> size: " << numbers.size() << std::endl;
    if (numbers.size() >= max_size) {
        throw std::out_of_range("Cannot add more numbers, Span is full.");
    }
    numbers.push_back(number);
}

// Method to add a range of numbers
// template <typename InputIterator>
// void Span::addNumbers(InputIterator begin, InputIterator end) {
//     if (std::distance(begin, end) + numbers.size() > max_size) {
//         throw std::out_of_range("Cannot add more numbers, Span will be over capacity.");
//     }
//     numbers.insert(numbers.end(), begin, end);
// }

// // Method to find the shortest span
int Span::shortestSpan() const {
    if (numbers.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span.");
    }
    int span = 0;
    std::vector<int> sorted(numbers);
    std::sort(sorted.begin(), sorted.end());
    int min_span = std::numeric_limits<int>::max();
    for (size_t i = 0; i < sorted.size(); i++) {
        span = sorted[i] - sorted[i - 1];
        if (span < min_span) {
            min_span = span;
        }
    }
    
    return min_span;
}

// Method to find the longest span
int Span::longestSpan() const {
    if (numbers.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span.");
    }

    std::vector<int> sorted(numbers);
    std::sort(sorted.begin(), sorted.end());
    int min_span = sorted[0];
    for (size_t i = 0; i < sorted.size(); i++) {
        int span = sorted[i] - sorted[i - 1];
        if (span > min_span) {
            min_span = span;
        }
    }
    return min_span;
}
// Explicit instantiation of the template method
// template void Span::addNumbers<std::vector<int>::iterator>(std::vector<int>::iterator, std::vector<int>::iterator);

