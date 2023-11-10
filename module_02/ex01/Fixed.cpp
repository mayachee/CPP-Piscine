/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:18:02 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/10 23:43:44 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int intValue)
{
    std::cout << "Int constructor called" << std::endl;
    value = intValue << fractionalBits;
}

Fixed::Fixed(const float floatValue) {
    // float f = 3.4f;
    std::cout << "Float constructor called" << std::endl;
    value = roundf(floatValue * (1 << fractionalBits));
    // value = floatValue;
    // (void)floatValue;
    // value = 5 << 1;
    // std::cout << (5 >> 2) << std::endl;
    // <<
    // 5 = 00000101
    // 5 << 1 = 00001010
    // >>
    std::cout << "old a is " << value << std::endl;

    // 1 << 8 = 0000000100000000
    
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    // copy object
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Assignation operator called" << std::endl;
    // std::cout << "old 2 a is " << other.value << std::endl;
    if (this != &other)
    {
        // std::cout << "              -->" << other.value << std::endl;
        this->value = other.value;
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw) {
    value = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(value) / (1 << fractionalBits);
}

int Fixed::toInt() const {
    return value >> fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}