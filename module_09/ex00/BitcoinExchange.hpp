/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:40:02 by mayache-          #+#    #+#             */
/*   Updated: 2024/07/05 15:07:25 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange {
public:
    bool loadDatabase(const std::string& filename);
    bool evaluateInput(const std::string& filename);
    void processEntry(const std::string& date, double value);

private:
    std::map<std::string, double> exchangeRates;

    double getRate(const std::string& date);
    bool isValidDate(const std::string& date);
    int isValidValue(double value);
};

#endif
