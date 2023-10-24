/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:44:23 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/23 20:31:04 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    Harl harl;

    if (ac != 2) {
        std::cerr << "Usage: " << av[0] << " <logLevel>" << std::endl;
        return 1;
    }
    std::string logLevel = av[1];
    harl.HarlFilter(logLevel);

    return 0;
}