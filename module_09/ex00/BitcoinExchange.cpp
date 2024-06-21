/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:39:57 by mayache-          #+#    #+#             */
/*   Updated: 2024/06/21 18:47:40 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string& dbFileName) {
    loadDatabase(dbFileName);
}

void BitcoinExchange::loadDatabase(const std::string& dbFileName) {
    std::ifstream file(dbFileName);
    if (!file.is_open()) {
        throw std::runtime_error("Error: could not open file.");
    }
    std::string line, date;
    float rate;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        if (std::getline(ss, date, ',') && ss >> rate) {
            exchangeRates[date] = rate;
        }
    }
}

float BitcoinExchange::getExchangeRate(const std::string& date) const {
    std::string closestDate = getClosestDate(date);
    if (closestDate.empty()) {
        throw std::runtime_error("Error: date not found.");
    }
    return exchangeRates.at(closestDate);
}

std::string BitcoinExchange::getClosestDate(const std::string& date) const {
    std::map<std::string, float>::const_iterator it = exchangeRates.lower_bound(date);
    if (it == exchangeRates.end()) {
        return (--it)->first;
    }
    if (it->first == date) {
        return it->first;
    }
    if (it == exchangeRates.begin()) {
        return it->first;
    }
    return (--it)->first;
}