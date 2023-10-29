/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:19:27 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/29 16:19:28 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int value;  // Representation of the fixed-point value

public:
    Fixed(); // Default constructor
    Fixed(float floatValue);  // Conversion constructor

    // Comparison operators
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // Arithmetic operators
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // Pre-increment operator
    Fixed& operator++();

    // Post-increment operator
    Fixed operator++(int);

    // Pre-decrement operator
    Fixed& operator--();

    // Post-decrement operator
    Fixed operator--(int);

    // Static member function - min
    static const Fixed& min(const Fixed& a, const Fixed& b);

    // Static member function - max
    static const Fixed& max(const Fixed& a, const Fixed& b);

    // Friend function to output the Fixed value
    // friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    //     os << static_cast<float>(fixed.value) / 256;
    //     return os;
    // }
    float toFloat(const Fixed& fixed) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif