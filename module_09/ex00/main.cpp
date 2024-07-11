/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:40:08 by mayache-          #+#    #+#             */
/*   Updated: 2024/07/05 14:04:55 by mayache-         ###   ########.fr       */
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
    if (!btcExchange.loadDatabase("bitcoin_prices.csv")) {
        return 1;
    }

    if (!btcExchange.evaluateInput(argv[1])) {
        return 1;
    }

    return 0;
}
