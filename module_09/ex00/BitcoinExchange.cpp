/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 23:07:40 by mayache-          #+#    #+#             */
/*   Updated: 2025/02/04 15:32:13 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool BitcoinExchange::databaseload(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open file this file." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string date;
        double rate;
        if (std::getline(iss, date, ',') && (iss >> rate)) {
            exchangeRates[date] = rate;
            // std::cout << exchangeRates[date] << std::endl;
            // std::cout << "Loaded " << date << " => " << rate << std::endl;
        }
    }

    file.close();
    return true;
}

bool BitcoinExchange::execute(const std::string& filename) {
    std::ifstream file(filename.c_str());

    // std::cout << "-->" << filename.c_str() << std::endl;
    if (!file.is_open()) {
        std::cerr << "Error" << std::endl;
        return false;
    }

    std::string line;
    std::getline(file, line); // This will read and discard the first line
    while (std::getline(file, line)) {
        std::istringstream iss(line); //iss >> value
        std::string date;       // 2016-03-16 | 3 ====> string: 2016-03-16
        double value;
        if (std::getline(iss, date, '|') && (iss >> value)) {

            
            date.erase(date.find_last_not_of(" \n\r\t") + 1);
            if (isValidValue(value) == 2)
                std::cerr << "Error: too large a number." << std::endl;
            else if (isValidDate(date) && isValidValue(value) == 1) {
                processEntry(date, value);
            } else if (isValidValue(value) == 0) {
                std::cerr << "Error: not a positive number." << std::endl;
            }
            else {
                std::cerr << "Error: bad input => " << date << std::endl;
            }
        }
        else {
            std::cerr << "Error: bad input => " << date << std::endl;
        }
    }

    file.close();
    return true;
}

void BitcoinExchange::processEntry(const std::string& date, double value) {
    double rate = getRate(date);
    std::cout << date << " => " << value << " = " << value * rate << std::endl;
}

double BitcoinExchange::getRate(const std::string& date) {
    std::map<std::string, double>::const_iterator it = exchangeRates.lower_bound(date);
    
    if (it == exchangeRates.end()) {
        // If no element is found, use the last element in the map.
        if (exchangeRates.empty()) {
            return 0.0; // No elements in the map
        }
        --it;
    } else if (it->first != date) {
        // If an exact match is not found, move to the previous date.
        if (it == exchangeRates.begin()) {
            return 0.0; // No previous date available
        }
        --it;
    }
    return it->second;
}

bool BitcoinExchange::isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool BitcoinExchange::checkdate(int day, int month, int year) {
    if (year < 1900 || year > 2100) return false;
    if (month < 1 || month > 12) return false;

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    return day >= 1 && day <= daysInMonth[month - 1];
}


bool BitcoinExchange::isValidDate(const std::string& date)
{
    // std::cout << "year" << date.substr(0, 4) << std::endl;
    // std::cout << "month" << date.substr(5, 2) << std::endl;
    // std::cout << "day" << date.substr(8, 2) << std::endl;
    
    if (checkdate(atoi(date.substr(8, 2).c_str()),
        atoi(date.substr(5, 2).c_str()),
            atoi(date.substr(0, 4).c_str())) == false)
        return false;
    if (date.length() != 10) return false;
    if (date[4] != '-' || date[7] != '-') return false;
    int year = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());
    if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31) return false;
    return true;
}

int BitcoinExchange::isValidValue(double value)
{
    if (value >= 1000)
        return 2;
    else if (value < 0)
        return 0;
    return 1;
}
