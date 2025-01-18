/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:50:42 by mayache-          #+#    #+#             */
/*   Updated: 2025/01/17 11:42:37 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructor
Span::Span(unsigned int N) : max_size(N)
{
    
}

Span::Span()
{

}
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
    if (numbers.size() >= max_size) {
        throw std::out_of_range("Cannot add more numbers, Span is full.");
    }
    numbers.push_back(number);;
}

// // Method to find the shortest span
int Span::shortestSpan() {
    if (numbers.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span.");
    }
    int span = 0;
    std::vector<int> numbers_sorted = ft_sorted(numbers);
    int min_span = std::numeric_limits<int>::max();
    for (size_t i = 0; i < numbers_sorted.size(); i++) {
        span = numbers_sorted[i] - numbers_sorted[i - 1];
        if (span < min_span) {
            min_span = span;
        }
    }
    
    return min_span;
}

// Method to find the longest span
int Span::longestSpan() {
    if (numbers.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span.");
    }

    std::vector<int> numbers_sorted = ft_sorted(numbers);
    int max_span = numbers_sorted[0];
    max_span = numbers_sorted[numbers.size() - 1] - numbers_sorted[0];
    return max_span;
}

std::vector<int> Span::ft_sorted(std::vector<int> numbers)
{
    if (numbers.empty()) {
        std::cout << "Empty Span" << std::endl;
        throw std::runtime_error("Span is empty");
    }
    if (numbers.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span.");
    }
    std::vector<int> sorted(numbers);
    std::sort(sorted.begin(), sorted.end());
    
    return (sorted);
}

void Span::display_table(std::vector<int>& numbers) 
{
    std::vector<int> numbers_sorted = ft_sorted(numbers);
    std::cout << "Sorted Table Numbers:" << std::endl;
    for (size_t i = 0; i < numbers_sorted.size(); ++i) {
        std::cout << "| " << numbers[i] << "\t|\t";
        std::cout << "| " << numbers_sorted[i] << "\t|" << std::endl;
    }
    std::cout << "_________\t_________" << std::endl;
    std::cout << std::endl;
    
}

std::vector<int>& Span::getNumbers() {
    return numbers;
}
