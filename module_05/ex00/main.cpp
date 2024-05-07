/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:42:03 by mayache-          #+#    #+#             */
/*   Updated: 2024/04/13 12:38:41 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    //Exceptions
    try {
        Bureaucrat b1("John", 2);
        std::cout << b1 << std::endl;

        b1.incrementGrade();
        std::cout << b1 << std::endl;

        Bureaucrat b2("Alice", 1);
        std::cout << b2 << std::endl;

        b2.decrementGrade();
        std::cout << b2 << std::endl;

        // Uncommenting the line below will throw an exception
        Bureaucrat b3("Bob", 5);

        // Bureaucrat b2("Alice", 1);
        std::cout << b3 << std::endl;

        b3.decrementGrade();
        std::cout << b3 << std::endl;
        // Bureaucrat b4("ayache", 160);

    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
