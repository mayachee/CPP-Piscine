/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:44:24 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/24 02:10:24 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& str)
{
    if (str == "nan" || str == "Nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "Float: " << str << "f" << std::endl;
        std::cout << "Double: " << str << std::endl;
        exit(0);
    }
    int i = 0;
    unsigned int clcule = 0;
    unsigned int clculef = 0;
    unsigned int clculep = 0;
    if (!str[1])
    {
        int inttt = isInteger(str);
        inttt = (int)str[0];
        if (inttt >= 0 && inttt <= 9)
        {
            std::cout << "char: " << str[0] << std::endl;
            std::cout << "int: " << inttt << std::endl;
            std::cout << "float: " << inttt << ".0f" << std::endl;
            std::cout << "double: " << inttt << ".0" << std::endl;
        }
        else
        {
            std::cout << "char: " << str[0] << std::endl;
            int asciiValue = (int)str[0];
            std::cout << "int: " << asciiValue << std::endl;
            std::cout << "float: " << asciiValue << ".0f" << std::endl;
            std::cout << "double: " << asciiValue << ".0" << std::endl; 
        }
    }
    else
    {
        while (str[i])
        {
            if (str[i] == 'f' || (str[i] >= '0' && str[i] <= '9') || str[i] == '.')
            {
                if (str[i] == 'f')
                    clculef++;
                if (str[i] == '.')
                    clculep++; 
                clcule++;
            }
            i++;
        }
        if (clcule < str.length() || clculef > 1 || clculep > 1)
        {
            int intt = isInteger(str);
            if (intt > 0)
                convertToChar(str);
            else
                std::cout << "char: Non displayable" << std::endl;
            convertToInteger(str);
            convertToFloat(str);
            convertToDouble(str);

        }
        else
        {
            convertToChar(str);
            convertToInteger(str);
            convertToFloat(str);
            convertToDouble(str);
        }
    }
}

int ScalarConverter::extractInteger(std::string str) {
    try {
        int nbr = std::stoi(str);
        return nbr; // Convert string to integer
    } catch (const std::invalid_argument&) {
        return 0; // Return 0 if conversion fails
    } catch (const std::out_of_range&) {
        return 0; // Return 0 if value is out of range
    }
}

int ScalarConverter::isInteger(const std::string& str) {

    std::string numStr;
    int startIdx = 0;

    // Find the end of the integer part
    size_t dotPosition = str.find('.');
    size_t endIdx = (dotPosition != std::string::npos) ? dotPosition : str.length();
    // Extract the integer part
    numStr = str.substr(startIdx, endIdx - startIdx);

    return extractInteger(numStr); 
}

void ScalarConverter::convertToInteger(const std::string& str) {
    if (!str[1])
    {
        int asciiValue = (int)str[0];
        std::cout << "int: " << asciiValue << std::endl;
    }
    else
    {
        if (isInteger(str) || isInteger(str) == 0) {
            std::cout << "int: " << isInteger(str) << std::endl;
        } else {
            std::cout << "Not an int number." << std::endl;
        }
    }
}

void convertStringToFloat(const std::string& str) {
    float num = std::stof(str);
    std::cout << "num = " << num << std::endl;
}

bool isFloatOrInt(const std::string& str) {
    try {
        float num = std::stof(str);
        // std::cout << "->>" << num << std::endl;
        if (num == static_cast<int>(num)) {
            return true;
        } else {
            return false;
        }
    } catch (const std::invalid_argument& ia) {
        return false;
    } catch (const std::out_of_range& oor) {
        return false;
    }
}

void ScalarConverter::convertToFloat(const std::string& str) {
    try {
        if (!str[1])
        {
            int asciiValue = (int)str[0];
            std::cout << "float: " << asciiValue << ".0f" << std::endl;
        }
        else
        {
            float Float = std::stof(str);
            bool bl = 0;
            if (!isFloatOrInt(str))
                std::cout << "float: " << Float << "f" << std::endl;
            else
            {   
                if (isFloatOrInt(str))
                    std::cout << "float: " << Float << ".0f" << std::endl;
                else
                {
                    int i = 0;
                    while (str[i])
                    {
                        if (str[i] == '.' && str[i + 1] == '0')
                        {
                            // std::cout << "float: " << Float << ".0f ll" << std::endl;
                            bl = 1;
                        }
                        i++;
                    }
                    if (bl == 0)
                        std::cout << "float: " << Float << "f" << std::endl;
                }
            }
        }
    } catch (const std::invalid_argument&) {
        std::cerr << "float: 0.0f" << std::endl;
    }
}

void ScalarConverter::convertToDouble(const std::string& str)
{
    try {
            if (!str[1])
            {
                int asciiValue = (int)str[0];
                std::cout << "double: " << asciiValue << ".0" << std::endl;
            }
            else
            {
                
            double Double = std::stod(str);
            if (!isFloatOrInt(str))
                std::cout << "double: " << Double << std::endl;
            else {
                if (isFloatOrInt(str))
                    std::cout << "double: " << Double << ".0" << std::endl;
            else
            {
                    std::cout << Double <<std::endl;
                    int i = 0;
                    int bl = 0;
                    while (str[i])
                    {
                        if (str[i] != '.')
                            bl = 0;
                        i++;
                    }
                    i = 0;
                    while (str[i])
                    {
                        if (str[i] == '.')
                        {
                            bl = 1;
                        }
                    i++;
                    }
                    if (bl == 0)
                        std::cout << "double: " << Double << ".0" << std::endl;
                    else
                        std::cout << "double: " << Double << std::endl;   
                    
                }
            }
        }
    } catch (const std::invalid_argument& e) {
         std::cout << "double: 0.0" << std::endl;
    }
}

bool ScalarConverter::isNumeric(const std::string& str)
{
    for (size_t i = 0; i < str.length(); i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

bool ScalarConverter::isFloat(const std::string& str)
{
    bool bl = false;
    if ((isdigit(str[0])) || ((str[0] == '-') || (str[0] == '+')))
        bl = true;
    else
        bl = false;
    if (str[str.length()] == 'f')
    {
        bl = true;
    }
    else
        bl = false;
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] == '.') {     
            bl = true;
        }
        else
            bl = false;
    }
    return bl;
}

bool ScalarConverter::isDouble(const std::string& str)
{
    bool bl = false;
    if ((isdigit(str[0])) || ((str[0] == '-') || (str[0] == '+')))
        bl = true;
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i + 1] == '.' && (str[i] < '0' && str[i ] > '9')) {     
            bl = true;
        }
    }
    if (str[str.length()] == 'f')
    {
        bl = false;
    }
    return bl;
}

double ScalarConverter::customStod(const std::string& str) {
    std::istringstream iss(str[str.length() - 1]);
    double result;
    if (!(iss >> result)) {
        throw std::invalid_argument("Invalid double literal");
    }
    return result;
}

void ScalarConverter::convertToChar(const std::string str)
{
    try {
        if (!str[1])
            std::cout << "char: " << str[0] << std::endl;
        else
        {
            int int_num = std::stoi(str);
            if (int_num < 32 || int_num > 126)
                std::cout << "char: Non displayable" << std::endl;
            else
            {
                if (int_num == 0)
                    std::cout << " : Non displayable" << std::endl;
                else
                {
                    if (int_num < 0)
                        int_num *= -1;
                    // Convert the integer to ASCII
                    char ascii_char = static_cast<char>(int_num);
                    // Print the ASCII character
                    std::cout << "char: '" << ascii_char << "'" << std::endl;
                }
            }
        }

    } catch (const std::invalid_argument&) {
        std::cout << "char: Non displayable" << std::endl;
    }
}


std::string  ScalarConverter::doubleToString(double value) {
    char buffer[50];
    
    std::sprintf(buffer, "%.2f", value);
    return std::string(buffer);
}

ScalarConverter::ScalarConverter(/* args */)
{
}

ScalarConverter::~ScalarConverter()
{
}


