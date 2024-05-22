/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:58:41 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/22 22:45:35 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void printInt(int x) {
    std::cout << x << " ";
}

void increment(int &x) {
    ++x;
}

void printString(const std::string &str) {
    std::cout << str << " ";
}

int main() {
    // Test with an array of integers
    int intArray[] = {1, 2, 3, 4, 5};
    std::string strArray[5] = {"Uranus", "Atheeena", "Zeus", "Nyx", "Gaia"};
    float floatArray[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    int intLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original int array: ";
    iter(intArray, intLength, printInt);
    std::cout << "\n";

    iter(intArray, intLength, increment);
    iter(strArray, 5, increment);
    iter(floatArray, 7, increment);

    std::cout << "Incremented int array: ";
    iter(intArray, intLength, printInt);
    std::cout << "\n";

    // Test with an array of strings
    std::string strArray[] = {"hello", "world", "iter", "template"};
    int strLength = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "String array: ";
    iter(strArray, strLength, printString);
    std::cout << "\n";

    return 0;
}
