/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:40:08 by mayache-          #+#    #+#             */
/*   Updated: 2025/01/29 12:20:11 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input file>" << std::endl;
        return 1;
    }

    BitcoinExchange btcExchange;
    if (!btcExchange.databaseload("bitcoin_prices.csv")) {
        return 1;
    }

    std::cout << "Processing input file..." << std::endl;
    if (!btcExchange.execute(argv[1])) {
        return 1;
    }

    return 0;
}
