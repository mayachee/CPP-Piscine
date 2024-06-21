/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:40:08 by mayache-          #+#    #+#             */
/*   Updated: 2024/06/21 19:16:15 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isValidDate(const std::string& date) {
    // Basic validation for YYYY-MM-DD format
    if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
        return false;
    }
    return true;
}

bool isValidValue(const std::string& valueStr) {
    try {
        float value = std::stof(valueStr);
        return value >= 0 && value <= 1000;
    } catch (const std::exception&) {
        return false;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    BitcoinExchange exchange("bitcoin_prices.csv");

    std::string line, date, valueStr;
    while (std::getline(inputFile, line)) {
        std::stringstream ss(line);
        if (std::getline(ss, date, '|') && std::getline(ss, valueStr)) {
            date = date.substr(0, date.find_last_not_of(" \t\n\r") + 1);
            std::cout << "->>" << date << std::endl;
            valueStr = valueStr.substr(valueStr.find_first_not_of(" \t\n\r"));
            std::cout << "->>" << valueStr << std::endl;
            
            // if (!isValidDate(date)) {
            //     std::cerr << "Error: bad input => " << date << std::endl;
            //     continue;
            // }

            // if (!isValidValue(valueStr)) {
            //     std::cerr << "Error: not a positive number." << std::endl;
            //     continue;
            // }

            try {
                float value = std::stof(valueStr);
                std::cout << "-->" << value << std::endl;
                // if (value > 1000) {
                //     std::cerr << "Error: too large a number." << std::endl;
                //     continue;
                // }
                float rate = exchange.getExchangeRate(date);
                std::cout << date << " => " << value << " = " << value * rate << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }
    }

    return 0;
}
