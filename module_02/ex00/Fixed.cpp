/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:18:07 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/09 16:48:40 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{
    std::cout << ORANGE_TEXT << "Destructor called" << RESET_TEXT << std::endl;
}

Fixed::Fixed()
{
    std::cout << ORANGE_TEXT << "Default constructor called" << RESET_TEXT << std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << ORANGE_TEXT << "Copy constructor called" << RESET_TEXT << std::endl;
    // copy object
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << ORANGE_TEXT << "Assignation operator called" << RESET_TEXT << std::endl;
    if (this != &other) {
        // cpoy value
        value = other.value;
    }
    // return the existing object
    return *this;
}

int Fixed::getRawBits() const 
{
    std::cout << ORANGE_TEXT << "getRawBits member function called" << RESET_TEXT << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}