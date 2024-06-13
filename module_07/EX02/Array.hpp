/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:33:21 by mayache-          #+#    #+#             */
/*   Updated: 2024/06/14 00:15:59 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array {
    private:
        T* elements;
        unsigned int n;

    public:
        // Default constructor: Creates an empty array
        Array() : elements(NULL), n(0) {}

        // Parameterized constructor: Creates an array of n elements initialized by default
        Array(unsigned int size) : n(size) {
            elements = new T[n]();
        }

        // Copy constructor
        Array(const Array& other) : n(other.n) {
            elements = new T[n]();
            for (unsigned int i = 0; i < n; ++i) {
                elements[i] = other.elements[i];
            }
        }

        // Assignment operator
        Array& operator=(const Array& other) {
            if (this != &other) {
                delete[] elements;
                n = other.n;
                elements = new T[n]();
                for (unsigned int i = 0; i < n; ++i) {
                    elements[i] = other.elements[i];
                }
            }
            return *this;
        }

        // Subscript operator for accessing elements
        T& operator[](unsigned int index) {
            if (index >= n) {
                throw std::out_of_range("Index out of bounds");
            }
            return elements[index];
        }

        const T& operator[](unsigned int index) const {
            if (index >= n) {
                throw std::out_of_range("Index out of bounds");
            }
            return elements[index];
        }

        // Member function to get the size of the array
        unsigned int size() const {
            return n;
        }
        
        // Destructor
        ~Array() {
            delete[] elements;
        }
};

#endif
