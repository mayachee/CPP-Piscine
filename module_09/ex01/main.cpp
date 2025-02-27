/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 23:45:48 by mayache-          #+#    #+#             */
/*   Updated: 2025/02/01 11:16:05 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.hpp"

int main(int argc, char* argv[]) {

    RPN rpn;
    if (argc != 2) {
        std::cerr << "Error\n";
        return 1;
    }

    std::string expression = argv[1];
    int result = rpn.evaluate_rpn(expression);

    if (result != -1) {
        std::cout << result << std::endl;
    }

    return 0;
}