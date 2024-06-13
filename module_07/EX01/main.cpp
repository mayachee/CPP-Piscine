/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:58:41 by mayache-          #+#    #+#             */
/*   Updated: 2024/06/13 22:36:48 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(int &x) {
    std::cout << x << " ";
}

void printFloat(float &x) {
    std::cout << x << " ";
}

template <typename T>
void increment(T &x) {
    ++x;
}

void printString(const std::string &str) {
    std::cout << str << " ";
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    std::string strArray[5] = {"Uranus", "Atheeena", "Zeus", "Nyx", "Gaia"};
    float floatArray[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    int intLength = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "\n";

    std::cout << "Original int array: ";
    iter(intArray, intLength, printInt);
    std::cout << "\n";

    std::cout << "Incremented int array: ";
    iter(intArray, intLength, increment<int>);
    iter(intArray, intLength, printInt);
    std::cout << "\n";
    
    iter(strArray, 5, printString);
    iter(floatArray, 7, increment<float>);
    std::cout << "\n";

    std::cout << "Incremented float array: ";
    iter(floatArray, 7, printFloat);
    std::cout << "\n";
    std::cout << "\n";

    return 0;
}
