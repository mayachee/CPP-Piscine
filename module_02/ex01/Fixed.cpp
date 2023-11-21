/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:18:02 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/18 11:08:46 by mayache-         ###   ########.fr       */
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

Fixed::Fixed(const float floatValue)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf(floatValue * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    // copy object
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
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
    return (float)(value) / (1 << fractionalBits);
}

int Fixed::toInt() const {
    return value >> fractionalBits;
}

std::ostream& operator<<(std::ostream& ostreamm, const Fixed& fixed) {
    ostreamm << fixed.toFloat();
    return ostreamm;
}