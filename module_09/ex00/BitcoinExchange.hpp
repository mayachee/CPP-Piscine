/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:40:02 by mayache-          #+#    #+#             */
/*   Updated: 2025/02/03 10:11:25 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>


class BitcoinExchange {
    private:
        std::map<std::string, double> exchangeRates;

        double getRate(const std::string& date);
        bool isValidDate(const std::string& date);
        int isValidValue(double value);
        bool isLeapYear(int year);
        bool checkdate(int day, int month, int year);

    public:
        bool databaseload(const std::string& filename);
        bool execute(const std::string& filename);
        void processEntry(const std::string& date, double value);
};

#endif
