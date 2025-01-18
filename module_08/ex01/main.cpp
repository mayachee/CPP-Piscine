/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:50:36 by mayache-          #+#    #+#             */
/*   Updated: 2025/01/17 11:39:04 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    
    Span sp = Span(7);
    std::vector<int>    vect;

    srand(time(0));

    for (int i = 0; i < 6; i++)
        vect.push_back(rand() % 100);

    try {
        sp.addNumbers(vect.begin(), vect.end());
        sp.addNumber(7);
        // std::cout << sp;
        sp.display_table(sp.getNumbers());
        std::cout << "--------" << std::endl;
        std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
        std::cout << "Longest  Span : " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what();
    }
}