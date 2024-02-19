/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:44:22 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/19 22:30:10 by mayache-         ###   ########.fr       */
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
    static int customStoi(const std::string& str);
    static double customStod(const std::string& str);
    static std::string  doubleToString(double value);
    ScalarConverter(/* args */);
    ~ScalarConverter();
};
