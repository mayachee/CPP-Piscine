/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:19:30 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/15 21:03:45 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}

Fixed::Fixed(float floatValue)
{
    value = (int)(floatValue * 256);
}

// Comparison operators
bool Fixed::operator>(const Fixed& other) const {
    return value > other.value;
}

bool Fixed::operator<(const Fixed& other) const {
    return value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const {
    return value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const {
    return value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const {
    return value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
    return value != other.value;
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const 
{
    Fixed result;
    result.value = value + other.value;
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.value = value - other.value;
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result.value = (value * other.value) / 256;
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;
    result.value = (value * 256) / other.value;
    return result;
}

// Pre-increment operator
Fixed& Fixed::operator++() { // ++i
    std::cout << "++i has been called\n";
    this->value++;
    return *this;
}

// Post-increment operator
Fixed Fixed::operator++(int) // i++
{
    std::cout << "i++ has been called\n";
    Fixed temp(*this);
    this->value++;
    return temp;
}

// Pre-decrement operator
Fixed& Fixed::operator--() { // --i
    this->value--;
    return *this;
}

// Post-decrement operator
Fixed Fixed::operator--(int) { // i--
    Fixed temp(*this);
    // --value;
    this->value--;
    return temp;
}

// Static member function - min
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a < b)
        return a;
    return b;
}

// Static member function - max
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    if (a > b)
        return a;
    return b;
}

float Fixed::toFloat(const Fixed& fixed) const {
    return (float)(fixed.value) / 256;
}

// Friend function to output the Fixed value
std::ostream& operator<<(std::ostream& ostreamm, const Fixed& fixed) {
    ostreamm << fixed.toFloat(fixed);
    return ostreamm;
}