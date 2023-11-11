/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:19:37 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/11 16:49:42 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    // Fixed const b( Fixed( 5.051f ) * Fixed( 2 ) );

    Fixed c(42);
    Fixed b(10.11f);
    // std::cout << ++c << std::endl;
    std::cout << c << std::endl;
    std::cout << ++c << std::endl;
    std::cout << c << std::endl;
    std::cout << --c << std::endl;
    std::cout << --c << std::endl;
    std::cout << c << std::endl;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}

// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016
