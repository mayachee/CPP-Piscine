/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:17:55 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/10 23:37:50 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// (1234)10 = (10011010010)2
// (1234.4321)10 = (10011010010.1000011100001)2
/// (100110100101000011100001)2 =

int main() {
    Fixed a;
    // Fixed const b(10);
    // Fixed const c(42.42f);
    // Fixed const d(b);
    // std::cout << "old a is " << a << std::endl;
    a = Fixed(1234.4321f);
    std::cout << "a is " << a << std::endl;
    exit(0);
    // b = Fixed(1234);
    // std::cout << "b is " << b << std::endl;
    // std::cout << "b is " << b << std::endl;
    // std::cout << "c is " << c << std::endl;
    // std::cout << "d is " << d << std::endl;
    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return 0;
}
