/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:50:36 by mayache-          #+#    #+#             */
/*   Updated: 2024/07/20 14:18:01 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    try {
        Span sp(5);

        sp.addNumber(6);
        sp.addNumber(4);
        sp.addNumber(21);
        sp.addNumber(9);
        sp.addNumber(18);

        std::cout << "shortest: " << sp.shortestSpan() << std::endl; // Expected output: 2
        std::cout << "longest: " << sp.longestSpan() << std::endl;  // Expected output: 14

    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
