/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:44:19 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/19 15:55:27 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char* av[]) {
    if (ac < 2) {
        std::cerr << "Usage: " << av[0] << " <literal>" << std::endl;
        return 1;
    }

    // Example usage
    ScalarConverter::convert(av[1]);

    return 0;
}

