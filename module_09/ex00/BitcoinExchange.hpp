/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:40:02 by mayache-          #+#    #+#             */
/*   Updated: 2025/01/29 12:20:11 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange {
    private:
        std::map<std::string, double> exchangeRates;

        double getRate(const std::string& date);
        bool isValidDate(const std::string& date);
        int isValidValue(double value);

    public:
        bool databaseload(const std::string& filename);
        bool execute(const std::string& filename);
        void processEntry(const std::string& date, double value);
};

#endif
