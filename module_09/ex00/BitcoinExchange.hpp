/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:40:02 by mayache-          #+#    #+#             */
/*   Updated: 2024/06/21 18:45:45 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>

class BitcoinExchange {
    public:
        BitcoinExchange(const std::string& dbFileName);
        float getExchangeRate(const std::string& date) const;
    private:
        std::map<std::string, float> exchangeRates;
        void loadDatabase(const std::string& dbFileName);
        std::string getClosestDate(const std::string& date) const;
};

#endif
