/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:44:22 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/09 21:39:51 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include <sstream>

class ScalarConverter
{
    private:
        /* data */

    public:
        static void convert(const std::string& str);

        // functions to help
        static double customStod(const std::string& str);
        static std::string  doubleToString(double value);
        static bool isFloat(const std::string& number);
        static bool isNumeric(const std::string& str);
        static bool isDouble(const std::string& str);
        static int isInteger(const std::string& str);
        static int extractInteger(std::string str);
        static char customStoi(const std::string& str);

        // Convert to double
        static void convertToDouble(const std::string& str);
        static void convertToInteger(const std::string& str);
        static void convertToFloat(const std::string& str);
        static void convertToChar(const std::string str);
        ScalarConverter();
        ~ScalarConverter();
};
