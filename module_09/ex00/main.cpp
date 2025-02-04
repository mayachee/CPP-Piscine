/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 23:46:17 by mayache-          #+#    #+#             */
/*   Updated: 2025/02/01 12:27:45 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input file>" << std::endl;
        return 1;
    }

    BitcoinExchange btcExchange;
    if (!btcExchange.databaseload("bitcoin_prices.csv")) {
        return 1;
    }

    if (!btcExchange.execute(argv[1])) {
        return 1;
    }

    return 0;
}
