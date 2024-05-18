/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:44:19 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/18 02:12:47 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// bool isValidInput(const std::string& input) {
//     bool hasDigit = false;
//     bool hasDecimal = false;
//     bool hasF = false;

//     double Double = std::stod(input);
//     std::cout << Double << std::endl;
//       float   Float = static_cast<std::string>(input);
//       std::cout << Float << std::endl;
//     if (input[input.length() - 1] == 'f' &&
//             input[input.length() - 2] == '0' && 
//             input[input.length() - 3] == '.')
//     {
//         std::cout << "Float: --- ";
//         for (size_t i = 0; i < input.length(); i++)
//         {
//             std::cout << input[i];
//         }
//         std::cout << std::endl;
//     }
//     for (size_t i = 0; i < input.length(); ++i) {
//         char c = input[i];
//         if (isdigit(c)) {
//             hasDigit = true;
//         } else if (c == '.') {
//             if (hasDecimal || hasF) {
//                 return false; // More than one decimal point or 'f'
//             }
//             hasDecimal = true;
//         } else if (c == 'f') {
//             if (!hasDigit || hasF || hasDecimal) {
//                 return false; // 'f' must follow digits and should not be repeated or preceded by '.'
//             }
//             // If 'f' is at the end of the string or followed by a space, it's considered valid
//             if (i == input.length() - 1 || input[i + 1] == ' ') {
//                 return true;
//             } else {
//                 return false;
//             }
//         } else {
//             return false; // Invalid character
//         }
//     }

//     return hasDigit;
// }

int main(int ac, char* av[])
{
    // float f = 55.0;
    // char c = f;
    // double d = f;
    // int i = f;
    // std::cout << f << std::endl;
    // std::cout << c << std::endl;
    // std::cout << d << std::endl;
    // std::cout << i << std::endl;
    if (ac != 2) {
        std::cerr << "Usage: " << av[0] << " <literal>" << std::endl;
        return 1;
    }
    // if (!isIntOrFloatOrDouble(av[1]))
    //     ScalarConverter::convert(av[1]);

    // std::cout << av[1] << std::endl;
    // if (isInt(av[1])) {
    //     std::cout << av[1] << " is an integer." << std::endl;
    // } else if (isFloat(av[1])) {
    //     std::cout << av[1] << " is a float." << std::endl;
    // } else if (isDouble(av[1])) {
    //     std::cout << av[1] << " is a double." << std::endl;
    // } else {
    //     std::cout << av[1] << " is not a valid number." << std::endl;
    // }

//         std::string inputs[] = {"52", "42.7854f", "42.554", "hello"};
// for (size_t i = 0; i < sizeof(inputs) / sizeof(inputs[0]); ++i) {
//     std::cout << inputs[i] << ": " << (validateInput(inputs[i]) ? "Valid" : "Invalid") << std::endl;
// }


// if (isValidInput(av[1]))
// {
     ScalarConverter::convert(av[1]);
// }
// else
//     std::cout << av[1] << ": Invalid" << std::endl;
//     return 0;  
}
